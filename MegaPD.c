// mgropp, 2013-06-26
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
 
#define MEGACLI "/usr/local/bin/MegaCli64"
 
int main(int argc, char** argv) {
	char* args[] = { MEGACLI, "-PDList", "-aALL", NULL };
	char* envp[] = { "PATH=/usr/bin:/bin:/usr/sbin:/sbin", NULL };

	setuid(0);
	execve(MEGACLI, args, envp);
 
	perror("exec");
	return EXIT_FAILURE;
}
