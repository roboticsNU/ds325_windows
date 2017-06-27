////////////////////////////////////////////////////////////////////////////////
// SoftKinetic DepthSense SDK
//
// COPYRIGHT AND CONFIDENTIALITY NOTICE - SOFTKINETIC CONFIDENTIAL
// INFORMATION
//
// All rights reserved to SOFTKINETIC SENSORS NV (a
// company incorporated and existing under the laws of Belgium, with
// its principal place of business at Boulevard de la Plainelaan 11,
// 1050 Brussels (Belgium), registered with the Crossroads bank for
// enterprises under company number 0811 341 454 - "Softkinetic
// Sensors").
//
// The source code of the SoftKinetic DepthSense Camera Drivers is
// proprietary and confidential information of Softkinetic Sensors NV.
//
// For any question about terms and conditions, please contact:
// info@softkinetic.com Copyright (c) 2002-2015 Softkinetic Sensors NV
////////////////////////////////////////////////////////////////////////////////


#ifdef _MSC_VER
#include <windows.h>
#endif

#include <iostream>
#include <stdio.h>
#include <vector>
#include <exception>

#include <DepthSense.hxx>

#include <queue>
#include "DepthConfData.h"
#include <stdlib.h>

#include "sshclient.h"

#include <chrono>

using namespace DepthSense;
using namespace std;
using namespace std::chrono;

int volatile finished = 0;

Context g_context;
DepthNode g_dnode;
ColorNode g_cnode;
AudioNode g_anode;

uint32_t g_aFrames = 0;
uint32_t g_cFrames = 0;
uint32_t g_dFrames = 0;

bool g_bDeviceFound = false;

ProjectionHelper* g_pProjHelper = NULL;
StereoCameraParameters g_scp;

// internal usage variables
int mainCycle = -1;
std::queue<DepthConfData> framesDepthConf;

/*----------------------------------------------------------------------------*/
// New audio sample event handler
void onNewAudioSample(AudioNode node, AudioNode::NewSampleReceivedData data)
{
    printf("A#%u: %d\n",g_aFrames,data.audioData.size());
    g_aFrames++;
}

/*----------------------------------------------------------------------------*/
// New color sample event handler
void onNewColorSample(ColorNode node, ColorNode::NewSampleReceivedData data)
{
    printf("C#%u: %d\n",g_cFrames,data.colorMap.size());
    g_cFrames++;
}

/*----------------------------------------------------------------------------*/
bool firstFrameFlag = false;
milliseconds startTime;
milliseconds endTime;
// New depth sample event handler
void onNewDepthSample(DepthNode node, DepthNode::NewSampleReceivedData data)
{
	if (!firstFrameFlag) {
		startTime = duration_cast< milliseconds >(system_clock::now().time_since_epoch());
		printf("GO!");
		firstFrameFlag = true;
	}
	
	DepthSense::Pointer<int16_t> depthPtrMap = data.depthMap;
	DepthSense::Pointer<int16_t> confPtrMap = data.confidenceMap;

	const int16_t *depthPtr = depthPtrMap.operator const int16_t *();
	const int16_t *confPtr = confPtrMap.operator const int16_t *();
	
	int w = data.stereoCameraParameters.depthIntrinsics.width;
	int h = data.stereoCameraParameters.depthIntrinsics.height;

	DepthConfData frame(depthPtr, confPtr, w, h);
	framesDepthConf.push(frame);
	 
    g_dFrames++;

    // Quit the main loop after 200 depth frames received
	if (finished == 1) {
		endTime = duration_cast< milliseconds >(system_clock::now().time_since_epoch());
		finishSSH();
		g_context.quit();
	}
}

/*----------------------------------------------------------------------------*/
void configureAudioNode()
{
    g_anode.newSampleReceivedEvent().connect(&onNewAudioSample);

    AudioNode::Configuration config = g_anode.getConfiguration();
    config.sampleRate = 44100;

    try 
    {
        g_context.requestControl(g_anode,0);

        g_anode.setConfiguration(config);
        
        g_anode.setInputMixerLevel(0.5f);
    }
    catch (ArgumentException& e)
    {
        printf("Argument Exception: %s\n",e.what());
    }
    catch (UnauthorizedAccessException& e)
    {
        printf("Unauthorized Access Exception: %s\n",e.what());
    }
    catch (ConfigurationException& e)
    {
        printf("Configuration Exception: %s\n",e.what());
    }
    catch (StreamingException& e)
    {
        printf("Streaming Exception: %s\n",e.what());
    }
    catch (TimeoutException&)
    {
        printf("TimeoutException\n");
    }
}

/*----------------------------------------------------------------------------*/
void configureDepthNode()
{
    g_dnode.newSampleReceivedEvent().connect(&onNewDepthSample);

    DepthNode::Configuration config = g_dnode.getConfiguration();
    config.frameFormat = FRAME_FORMAT_QVGA;
    config.framerate = 25;
    config.mode = DepthNode::CAMERA_MODE_CLOSE_MODE;
    config.saturation = true;

	g_dnode.setEnableConfidenceMap(true);
	g_dnode.setEnableDepthMap(true);
    g_dnode.setEnableVertices(true);

    try 
    {
        g_context.requestControl(g_dnode,0);

        g_dnode.setConfiguration(config);
    }
    catch (ArgumentException& e)
    {
        printf("Argument Exception: %s\n",e.what());
    }
    catch (UnauthorizedAccessException& e)
    {
        printf("Unauthorized Access Exception: %s\n",e.what());
    }
    catch (IOException& e)
    {
        printf("IO Exception: %s\n",e.what());
    }
    catch (InvalidOperationException& e)
    {
        printf("Invalid Operation Exception: %s\n",e.what());
    }
    catch (ConfigurationException& e)
    {
        printf("Configuration Exception: %s\n",e.what());
    }
    catch (StreamingException& e)
    {
        printf("Streaming Exception: %s\n",e.what());
    }
    catch (TimeoutException&)
    {
        printf("TimeoutException\n");
    }

}

/*----------------------------------------------------------------------------*/
void configureColorNode()
{
    // connect new color sample handler
    g_cnode.newSampleReceivedEvent().connect(&onNewColorSample);

    ColorNode::Configuration config = g_cnode.getConfiguration();
    config.frameFormat = FRAME_FORMAT_VGA;
    config.compression = COMPRESSION_TYPE_MJPEG;
    config.powerLineFrequency = POWER_LINE_FREQUENCY_50HZ;
    config.framerate = 25;

    g_cnode.setEnableColorMap(true);

    try 
    {
        g_context.requestControl(g_cnode,0);

        g_cnode.setConfiguration(config);
    }
    catch (ArgumentException& e)
    {
        printf("Argument Exception: %s\n",e.what());
    }
    catch (UnauthorizedAccessException& e)
    {
        printf("Unauthorized Access Exception: %s\n",e.what());
    }
    catch (IOException& e)
    {
        printf("IO Exception: %s\n",e.what());
    }
    catch (InvalidOperationException& e)
    {
        printf("Invalid Operation Exception: %s\n",e.what());
    }
    catch (ConfigurationException& e)
    {
        printf("Configuration Exception: %s\n",e.what());
    }
    catch (StreamingException& e)
    {
        printf("Streaming Exception: %s\n",e.what());
    }
    catch (TimeoutException&)
    {
        printf("TimeoutException\n");
    }
}

/*----------------------------------------------------------------------------*/
void configureNode(Node node)
{
    if ((node.is<DepthNode>())&&(!g_dnode.isSet()))
    {
        g_dnode = node.as<DepthNode>();
        configureDepthNode();
        g_context.registerNode(node);
    }

    if ((node.is<ColorNode>())&&(!g_cnode.isSet()))
    {
        g_cnode = node.as<ColorNode>();
        configureColorNode();
        g_context.registerNode(node);
    }

    if ((node.is<AudioNode>())&&(!g_anode.isSet()))
    {
        g_anode = node.as<AudioNode>();
        configureAudioNode();
        g_context.registerNode(node);
    }
}

/*----------------------------------------------------------------------------*/
void onNodeConnected(Device device, Device::NodeAddedData data)
{
    configureNode(data.node);
}

/*----------------------------------------------------------------------------*/
void onNodeDisconnected(Device device, Device::NodeRemovedData data)
{
    if (data.node.is<AudioNode>() && (data.node.as<AudioNode>() == g_anode))
        g_anode.unset();
    if (data.node.is<ColorNode>() && (data.node.as<ColorNode>() == g_cnode))
        g_cnode.unset();
    if (data.node.is<DepthNode>() && (data.node.as<DepthNode>() == g_dnode))
        g_dnode.unset();
    printf("Node disconnected\n");
}

/*----------------------------------------------------------------------------*/
void onDeviceConnected(Context context, Context::DeviceAddedData data)
{
    if (!g_bDeviceFound)
    {
        data.device.nodeAddedEvent().connect(&onNodeConnected);
        data.device.nodeRemovedEvent().connect(&onNodeDisconnected);
        g_bDeviceFound = true;
    }
}

/*----------------------------------------------------------------------------*/
void onDeviceDisconnected(Context context, Context::DeviceRemovedData data)
{
    g_bDeviceFound = false;
    printf("Device disconnected\n");
}

/*----------------------------------------------------------------------------*/
/*-----------------------defining functions--------------------------*/
BOOL WINAPI consoleHandler(DWORD signal);
void saveDepthData();
void saveIMUData();
void startIMUSensor();

int main(int argc, char* argv[])
{
	printf("WAIT 1");
	startSSH();
	Sleep(30 * 1000);
	printf("WAIT 2");
	g_context = Context::create("localhost");

    g_context.deviceAddedEvent().connect(&onDeviceConnected);
    g_context.deviceRemovedEvent().connect(&onDeviceDisconnected);

    // Get the list of currently connected devices
    vector<Device> da = g_context.getDevices();

    // We are only interested in the first device
    if (da.size() >= 1)
    {
        g_bDeviceFound = true;

        da[0].nodeAddedEvent().connect(&onNodeConnected);
        da[0].nodeRemovedEvent().connect(&onNodeDisconnected);

        vector<Node> na = da[0].getNodes();
        
        printf("Found %u nodes\n",na.size());
        
        for (int n = 0; n < (int)na.size();n++)
            configureNode(na[n]);
    } 

	if (!SetConsoleCtrlHandler(consoleHandler, TRUE)) {
		printf("\nERROR: Could not set control handler");
		return 1;
	}

    g_context.startNodes();

	startIMUSensor();
    g_context.run();

    g_context.stopNodes();

    if (g_cnode.isSet()) g_context.unregisterNode(g_cnode);
    if (g_dnode.isSet()) g_context.unregisterNode(g_dnode);
    if (g_anode.isSet()) g_context.unregisterNode(g_anode);

    if (g_pProjHelper)
        delete g_pProjHelper;

	// TODO: save frames to disk
	saveDepthData();
	saveIMUData();
    return 0;
}

// IMU DATA 
void startIMUSensor() {
	// TODO: IMU START (ssh)
}
void saveIMUData() {
	// TODO: IMU retrieve and save
}
// DEPTH RELATED FUNCTIONS
bool dirExists(const std::string& dirName_in)
{
	DWORD ftyp = GetFileAttributesA(dirName_in.c_str());
	if (ftyp == INVALID_FILE_ATTRIBUTES)
		return false;  //something is wrong with your path!

	if (ftyp & FILE_ATTRIBUTE_DIRECTORY)
		return true;   // this is a directory!

	return false;    // this is not a directory!
}

int getMainCycle() {
	if (!dirExists("data")) {
		CreateDirectory(L"data", NULL);
	}

	int num = 1;
	char dirname[255];
	while (true) {
		sprintf(dirname, "data/depthsense%d", num);
		if (!dirExists(dirname)) {
			string s(dirname);
			std::wstring stemp = std::wstring(s.begin(), s.end());
			LPCWSTR sw = stemp.c_str();

			sprintf(dirname, "data/depthsense%d/depth", num);
			string sdepth(dirname);
			std::wstring depthdir= std::wstring(sdepth.begin(), sdepth.end());
			LPCWSTR ldepthdir = depthdir.c_str();

			sprintf(dirname, "data/depthsense%d/conf", num);
			string sconf(dirname);
			std::wstring confdir = std::wstring(sconf.begin(), sconf.end());
			LPCWSTR lconfdir = confdir.c_str();

			CreateDirectory(sw, NULL);
			CreateDirectory(ldepthdir, NULL);
			CreateDirectory(lconfdir, NULL);
			return num;
		}
		++num;
	}
}

void saveDepthDataToFile(DepthConfData data, char *depthname, char *confname) {
	// TODO: save data into file (use png or not?)
	
	FILE *fdepth = fopen(depthname, "w");
	FILE *fconf = fopen(confname,	"w");
	for (int i = 0; i < data.getHeight(); ++i) {
		for (int j = 0; j < data.getWidth(); ++j) {
			int16_t depthValue = data.getDepthValue(i, j);
			int16_t confValue = data.getConfValue(i, j);
			fprintf(fdepth, "%d\t", data.getDepthValue(i, j));
			fprintf(fconf, "%d\t", data.getConfValue(i, j));
		}
		fprintf(fdepth, "\n");
		fprintf(fconf, "\n");
	}
	fclose(fdepth);
	fclose(fconf);
}

void saveDepthData() {
	mainCycle = getMainCycle();
	int num = 0;
	char depthFileName[256];
	char confFileName[256];
	printf("saving depth data (g_dFrames, frames count): #%u: %d\n", g_dFrames, framesDepthConf.size());
	auto difference = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
	std::cout << "time spent " << difference;
	while (!framesDepthConf.empty()) {
		DepthConfData frame = framesDepthConf.front();
		sprintf(depthFileName, "data/depthsense%d/depth/depth%05d.png", mainCycle, num++);
		sprintf(confFileName, "data/depthsense%d/conf/depth%05d.png", mainCycle, num++);
		// TODO write to depthFileName
		saveDepthDataToFile(frame, depthFileName, confFileName);
		framesDepthConf.pop();
	}
}

BOOL WINAPI consoleHandler(DWORD signal) {

	if (signal == CTRL_C_EVENT)
		finished = 1;

	return TRUE;
}
