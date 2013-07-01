// mgropp, 2013-06-26
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
 
#define MEGACLI "/usr/local/bin/MegaCli64"
 
int main(int argc, char** argv) {
	char* args[] = { MEGACLI, "-PDList", "-aALL", NULL };
	setuid(0);
	execv(MEGACLI, args);
 
	perror("exec");
	return EXIT_FAILURE;
}
