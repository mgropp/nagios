// mgropp, 2013-07-09
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
 
#define BACKUPPC_SERVERMESG "/usr/share/backuppc/bin/BackupPC_serverMesg"
 
int main(int argc, char** argv) {
	execl(BACKUPPC_SERVERMESG, BACKUPPC_SERVERMESG, "status", "hosts", NULL);
	perror("exec");
	return EXIT_FAILURE;
}
