#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void string_reverse1(char *string) 
{ 
	char * end = string + strlen(string) - 1;
	int length = strlen(string);
	char * rev = malloc(length);
	int i;
	
	for(i=0; i <= length; i++){
		rev[i] = *end;
		*end--;		
	}
	string = rev;

}


char *string_reverse2(const char *string)
{
 /* your code here */
}

int main(void){
	char mystring[] = "testing";
	string_reverse1(mystring);
	printf("%s\n", mystring);
}

