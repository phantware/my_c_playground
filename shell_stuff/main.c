#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	int id = fork();
	if(id ==0){
		sleep(1);
	}
	printf("Current ID: %d, Parent ID: %d\n",
			getpid(), getppid());
	if(id != 0){
		wait(NULL);
	}
	return 0;
}
