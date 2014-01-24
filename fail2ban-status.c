// mgropp, 2013-06-26
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
 
#define SERVICE "/usr/sbin/service"
#define SERVICE_NAME "fail2ban"
 
int main(int argc, char** argv) {
	char* args[] = { SERVICE, SERVICE_NAME, "status" };
	char* envp[] = { "PATH=/usr/bin:/bin:/usr/sbin:/sbin", NULL };

	setuid(0);
	execve(SERVICE, args, envp);
 
	perror("exec");
	return EXIT_FAILURE;
}
