#include <stdio.h>
#include <stdlib.h>

void loop(void){
 // 3 Template variables

 char * line;
 char ** args;
 int status;

//The computer reads the commands entered by the user
//It will parse the commands computer can understand the commands
//Execute the commands

 do{

  printf("%s", "Overwatch@root >");
  line = read();
  //args is an array of strings
  //echo c programming is good

  args = parse(line);
  status = execute(args);

  // freeing the memory 
  free(line);
  free(args);

 }while (status)
 {
  /* code */
 }
 

}

int main(int argc, char** argv){
//Load configuration
//Shell Read and Execute a configuration file

// run REPL loop

loop(); // reads instruction given by the user, execute them and print the output
//Perform any shutdown cleanup

return 0;

}