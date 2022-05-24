#include <stdio.h>
#include <stdlib.h> // librabry where system function is defined

int main(){
system("ls"); //this is used to call the function, we then supply the command in the "ls " which run same ls in bash

system("echo 'some context' > test.txt ");
system("cat test.txt");

return 0;
}