#include <stdio.h>
int main(){
	
	int idadePedro, idadeJoana, idadeIsmael;
	
	printf("Insira quantos anos tem Pedro: ");
	scanf("%d", &idadePedro);
	printf("Insira quantos anos tem Joana: ");
	scanf("%d", &idadeJoana);
	printf("Insira quantos anos tem Ismael: ");
	scanf("%d", &idadeIsmael);
	
		if (idadePedro>idadeJoana && idadePedro>idadeIsmael && idadeJoana>idadeIsmael){
			
			printf("Mais velho: Pedro\n Do meio: Joana\n Mais novo: Ismael");
					
		}
		
		if (idadePedro>idadeJoana && idadePedro>idadeIsmael && idadeJoana<idadeIsmael){
			
			printf(" Mais velho: Pedro\nDo meio: Ismael\n Mais novo: Joana");
		
		}
		if (idadePedro<idadeJoana && idadePedro<idadeIsmael && idadeJoana>idadeIsmael){
			
			printf(" Mais velho: Joana\nDo meio: Ismael\n Mais novo: Pedro");
		
		}
			if (idadePedro<idadeJoana && idadePedro>idadeIsmael && idadeJoana>idadeIsmael){
			
			printf(" Mais velho: Joana\nDo meio: Pedro \n Mais novo: Ismael");
		}		
			if (idadePedro<idadeJoana && idadePedro<idadeIsmael && idadeJoana<idadeIsmael){
			
			printf(" Mais velho: Ismael\nDo meio: Joana \n Mais novo: Pedro");
		}				
		if (idadePedro>idadeJoana && idadePedro<idadeIsmael && idadeJoana<idadeIsmael){
			
			printf(" Mais velho: Ismael\nDo meio: Pedro \n Mais novo: Joana");
		}
}
