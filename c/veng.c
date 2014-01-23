#include <stdio.h>
#include <string.h>
#include <stdlib.h>





int main(int argc, char * argv[]){

	char * key = argv[1];
	char line[100];
	fgets(line, 100, stdin);


	int keychar[strlen(key)-1];
	
	int k;
	for(k = 0; k < strlen(key); k++){
		if(key[k] > 64 && key[k] < 91){
			keychar[k] = key[k] - 65;
		}else if(key[k] > 96 && key[k] < 123){
			keychar[k] = key[k] - 97;
		}else{
			exit(0);
		}
	}
	
	
	
	

	
	

	int counter = 0;
	int i;
		
	for(i = 0; i < strlen(line); i++){
		if(line[i] > 64 && line[i] < 91){
			printf("%c", (((line[i]-65)+keychar[counter])%26) + 65);
			counter++;
		}else if(line[i] > 96 && line[i] < 123){
			printf("%c", (((line[i]-97)+keychar[counter])%26) + 97);
			counter++;
		}else{
			printf("%c", line[i]);
		}
		if(counter == strlen(key)){
			counter = 0;
		}

	}
	


}
