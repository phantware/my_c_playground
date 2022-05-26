#include <stdio.h> // library for Input and Output device
#include <string.h> // library for string
#include <stdlib.h> // librabry where system function is defined
#include <unistd.h> // this is a Linux specific library

/**
 * @brief for is like forking the execution line
 * 
 * @param argc 
 * @param argv 
 * @return * int 
 */

int main(int argc, char* argv[]){
 int id = fork();
if(id != 0){
  fork();
}
 printf("Hello World\n");
 // if(id == 0){
 //  printf("Hello from child process\n");
 // }else{
 //  printf("Hello from the main process\n");
 // }

 return 0;
}