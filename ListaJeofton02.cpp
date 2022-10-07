#include <stdio.h>
int main(){
	float  F, K, C;
	int temp;
// Entrada de dados
	printf("Insira a temperatura em Farenheit: ");
	scanf("%f", &F);
	
	
	printf("Você deseja ler a temperatura em Celsius ou Kelvin? \n [1] Celsius \n [2] Kelvin\n");
		scanf("%d", &temp);
	
	
// Processamento F para C	
	switch(temp)
	{
		
		case 1:
		{
		
			C = (F-32)/1.8;
			printf("Temperatura em Celsius: %.2f", C);
			break;
			
			}

//Processamento F para K
		case 2:
		{
			
			K = (F-32) * 5/9 +273;
			printf("Temperatura em Kelvin: %.2f\n", K);
	
			break;
		}
	
	
	
	
	
		default:
			printf("Entrada inválida, tente novamente");
	}
	
}


	
	


