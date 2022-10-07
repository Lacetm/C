//Faça um programa que receba um número inteiro 
//e que verifique se esse número é par ou ímpar.
// O programa deve informar se o número é par,
// caso afirmativo informar também se é ou não maior que 15
// ou se o número é ímpar, caso afirmativo informar se é ou não menor que 50.

#include <stdio.h>
int main(){
	
	int num;
	
	//Entrada de dados
	printf("Insira um número inteiro: ");
	scanf("%d", &num);
	//processamento par ou impar
	if (num%2==0)
	{
		//Saída par ou impar
	
		printf("O número %d é par\n", num);
			//saída maior ou não que 15
			if(num>15){
				printf("O número %d é maior que 15\n", num);
			}else{
				printf("O número %d não é maior que 15\n", num);
			}
			
	}
	else{
		//Saída par ou impar
	
		printf("O número %d é impar\n", num);
		//saída impar menor ou não que 50
			if(num<50){
				printf("O número %d é menor que 50\n", num);
			}
			else{
				printf("O número %d não é menor que 50\n");
			}
	}
	

	
	
	
}
