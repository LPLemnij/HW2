#include <stdio.h>
#include <stdlib.h>

  
int main(void) {
	FILE * file = fopen("C:/PE-1.txt", "w+");
	int match;
	char line[250];
	
    while(fgets(line, 250, file) != NULL) {
     	if(strcmp(line, "I want to learn PE file format!\n")) {
     		match = 1;
     		break;
		 }
    }
 	if(!match) {
 		int c = fputs("I want to learn PE file format!", file);
	 }
    fclose(file);
    free(line);
 }
