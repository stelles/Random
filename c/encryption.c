#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void encrypt(char* filename){
	FILE *ifp, *ofp;
	ifp = fopen(filename, "r");
	char of[20] = "encrypted";
	strcat(of, filename);
	ofp = fopen(of, "w");
	char c;
	int i;

	while((c = fgetc(ifp)) != EOF)
	{
		char bits[7];
		for(i = 0; i < 8; i++){
			sprintf(&bits[i],"%d", (c >> i)&1);
		}
		fwrite(bits, 1, sizeof(bits), ofp);
	}



	fclose(ifp);


}

int main(void){

char * fn = "test.txt";
encrypt(fn);
}	
