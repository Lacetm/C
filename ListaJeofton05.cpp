#include <stdio.h>
#include <conio.h>

int main(){
	
	int i; 
	char caractere;
	printf("Dec - Octal - Hexad. \n");
	for (i=0; i<128; i++){
		printf("%d %o %x\n", i, i, i);
	}	
	printf("Caracteres: \n ");
		for (i=33; i<128; i++){
			caractere = i;
			printf("%c \n", caractere);
		}
	
	
}
