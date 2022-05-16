#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	int id = fork();
	printf("Current ID: %d, Parent ID: %d\n",
			getpid(), getppid());
	return 0;
}
