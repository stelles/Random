#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(int argc, char * argv[]){

	int k = atoi(argv[1]);
	char line[100];
	fgets(line, 100, stdin);

	
	


	int i;
		
	for(i = 0; i < strlen(line); i++){
		if(line[i] > 64 && line[i] < 91){
			printf("%c", (((line[i]-64)+k)%26) + 64);
		}else if(line[i] > 96 && line[i] < 123){
			printf("%c", (((line[i]-96)+k)%26) + 96);
		}else{
			printf("%c", line[i]);
		}
	}
	


}
