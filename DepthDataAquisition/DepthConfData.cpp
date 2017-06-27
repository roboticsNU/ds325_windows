#include "DepthConfData.h"

DepthConfData::DepthConfData(const int16_t *depthPtr, const int16_t *confPtr, int w, int h)
{
	width = w;
	height = h;
	depth = new int16_t[w * h];
	conf = new int16_t[w * h];

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			int16_t value = depthPtr[i*w + j];
			depth[i*w + j] = value;
			value = confPtr[i*w + j];
			conf[i*w + j] = value;
		}
	}
}


DepthConfData::~DepthConfData()
{
}

int DepthConfData::getHeight() {
	return height;
}

int DepthConfData::getWidth() {
	return width;
}

int16_t DepthConfData::getDepthValue(int i, int j) {
	return depth[i * width + j];
}

int16_t DepthConfData::getConfValue(int i, int j) {
	return conf[i * width + j];
}