#include "sshclient.h"
#include <C:\Development\libs\chilkat64\include\C_CkSsh.h>
//#include "C_CkSsh.h" 

extern int volatile finished;

HCkSsh ssh;
int port;
BOOL success;

void startSSH(void)
{
	
	const char *strOutput;

	//  This example assumes Chilkat SSH/SFTP to have been previously unlocked.
	//  See Unlock SSH for sample code.

	ssh = CkSsh_Create();

	port = 22;
	success = CkSsh_Connect(ssh, "192.168.7.2", port);
	if (success != TRUE) {
		printf("%s\n", CkSsh_lastErrorText(ssh));
		CkSsh_Dispose(ssh);
		return;
	}

	//  Authenticate using login/password:
	success = CkSsh_AuthenticatePw(ssh, "machinekit", "machinekit");
	if (success != TRUE) {
		printf("%s\n", CkSsh_lastErrorText(ssh));
		CkSsh_Dispose(ssh);
		return;
	}

	//  Send command to start process
	strOutput = CkSsh_quickCommand(ssh, "df", "ansi");
	if (CkSsh_getLastMethodSuccess(ssh) != TRUE) {
		printf("%s\n", CkSsh_lastErrorText(ssh));
		CkSsh_Dispose(ssh);
		return;
	}

	printf("---- df ----\n");
	printf("%s\n", strOutput);

	strOutput = CkSsh_quickCommand(ssh, "echo hello world", "ansi");
	if (CkSsh_getLastMethodSuccess(ssh) != TRUE) {
		printf("%s\n", CkSsh_lastErrorText(ssh));
		CkSsh_Dispose(ssh);
		return;
	}

	printf("---- echo hello world ----\n");
	printf("%s\n", strOutput);

	strOutput = CkSsh_quickCommand(ssh, "date", "ansi");
	if (CkSsh_getLastMethodSuccess(ssh) != TRUE) {
		printf("%s\n", CkSsh_lastErrorText(ssh));
		CkSsh_Dispose(ssh);
		return;
	}

	printf("---- date ----\n");
	printf("%s\n", strOutput); 

}

void finishSSH(void) {
	const char *strOutput = CkSsh_quickCommand(ssh, "\x003", "ansi");
	if (CkSsh_getLastMethodSuccess(ssh) != TRUE) {
		printf("%s\n", CkSsh_lastErrorText(ssh));
		CkSsh_Dispose(ssh);
		return;
	}

	printf("---- date ----\n");
	printf("%s\n", strOutput);
	
	CkSsh_Dispose(ssh);
	printf("ssh finished\n");
}


void sftp(int num) {
	finishSSH();
	HCkSFtp sftp;
	BOOL success;
	int port;
	const char *hostname;
	const char *handle;

	//  Important: It is helpful to send the contents of the
	//  sftp.LastErrorText property when requesting support.

	sftp = CkSFtp_Create();

	//  Any string automatically begins a fully-functional 30-day trial.
	success = CkSFtp_UnlockComponent(sftp, "Anything for 30-day trial");
	if (success != TRUE) {
		printf("%s\n", CkSFtp_lastErrorText(sftp));
		CkSFtp_Dispose(sftp);
		return;
	}

	//  Set some timeouts, in milliseconds:
	CkSFtp_putConnectTimeoutMs(sftp, 5000);
	CkSFtp_putIdleTimeoutMs(sftp, 10000);

	//  Connect to the SSH server.
	//  The standard SSH port = 22
	//  The hostname may be a hostname or IP address.

	hostname = "www.my-ssh-server.com";
	port = 22;
	success = CkSFtp_Connect(sftp, hostname, port);
	if (success != TRUE) {
		printf("%s\n", CkSFtp_lastErrorText(sftp));
		CkSFtp_Dispose(sftp);
		return;
	}

	//  Authenticate with the SSH server.  Chilkat SFTP supports
	//  both password-based authenication as well as public-key
	//  authentication.  This example uses password authenication.
	success = CkSFtp_AuthenticatePw(sftp, "myLogin", "myPassword");
	if (success != TRUE) {
		printf("%s\n", CkSFtp_lastErrorText(sftp));
		CkSFtp_Dispose(sftp);
		return;
	}

	//  After authenticating, the SFTP subsystem must be initialized:
	success = CkSFtp_InitializeSftp(sftp);
	if (success != TRUE) {
		printf("%s\n", CkSFtp_lastErrorText(sftp));
		CkSFtp_Dispose(sftp);
		return;
	}

	//  Open a file on the server:
	handle = CkSFtp_openFile(sftp, "hamlet.xml", "readOnly", "openExisting");
	if (CkSFtp_getLastMethodSuccess(sftp) != TRUE) {
		printf("%s\n", CkSFtp_lastErrorText(sftp));
		CkSFtp_Dispose(sftp);
		return;
	}

	//  Download the file:
	success = CkSFtp_DownloadFile(sftp, handle, "c:/temp/hamlet.xml");
	if (success != TRUE) {
		printf("%s\n", CkSFtp_lastErrorText(sftp));
		CkSFtp_Dispose(sftp);
		return;
	}

	//  Close the file.
	success = CkSFtp_CloseHandle(sftp, handle);
	if (success != TRUE) {
		printf("%s\n", CkSFtp_lastErrorText(sftp));
		CkSFtp_Dispose(sftp);
		return;
	}

	printf("Success.\n");


	CkSFtp_Dispose(sftp);
}