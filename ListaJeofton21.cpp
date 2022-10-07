//Escreva um programa que leia doze números do tipo inteiro ao usuário. Separe esses
//números em pares e ímpares e os armazenem em dois outros vetores separando pares e
//ímpares, exibindo os resultados na tela
#include <stdio.h>
#include <string.h>
int main(){
	int num[12], impares[12], pares[12], j, i, contpar, contimpar;
	memset(num,0, 12*sizeof(num));
	
	for (i=0; i<=11; i++){
		printf("Digite um número: ");
		scanf("%d", &num[i]);
	}
	for(j=0;j<=0;j++){
		{
		
		for(i=0; i<12;i++){
			if(num[i]%2==0){
				pares[contpar]=num[i];
				contpar++;
		}
			if (num[i]%2!=0){
				impares[contimpar]=num[i];
				contimpar++;
			}
		}	
		}
		
	}
	printf("Números pares: \n");
	for(j=0;j<12;j++){
		if (pares[j]!=0){
		
		printf("%d\n", pares[j]);
		}
		
		
	}
	printf("Números impares: \n");
	for(j=0;j<12;j++){
		if (impares[j]!=0){
			printf("%d\n", impares[j]);
		}
	}
}





