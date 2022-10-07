//4) Faça um programa que lê dois valores e imprime: (0,1)
//a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
//b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;
//c) se ambos forem iguais a mensagem "valores iguais"

#include <stdio.h>
#include <conio.h>

int main(){
	int i, num1, num2;
//Entrada de dados

	printf("Digite um valor: ");
	scanf("%d", &num1);
	printf("Digite outro valor: ");
	scanf("%d", &num2);
	
	if(num1<num2)
	{
		for (i=num1; i<=num2; i++)
		{
			printf("%d ",i);		
		}
		printf("\n\n");
		for (i=num2; i>=num1; i--)
		{
			printf("%d ", i);		
		}
		
	}
	
	if(num1==num2)
	{
		printf("Valores iguais");
	}

//Processamento

//Saída de dados
	
}
