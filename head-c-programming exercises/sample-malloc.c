#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *s = "hello world";
      
        char *s_copy;
	printf("Testing %s \n", s);
		
	 s_copy = malloc(sizeof(char) * 11);
	if(s_copy = NULL){
		printf("memory space is not available");
		return -1;
	}
	 printf("Testing %p", sizeof(s_copy));
/*	     
	    if( s_copy = NULL){
	       printf("memory space is not available");
	       return -1;
	    }
							     
	     int i = 0;
				   
	  while( i < 12 )
	  {
	   s_copy[i] = s[i];
	   i++;
	 }
	  s_copy[i] = '\0';

	  printf("the result is %s\n the old string is %s ", s_copy, s);
	free(s_copy);
	*/
	  return 0;
}
