//Fa�a um programa que receba um n�mero inteiro 
//e que verifique se esse n�mero � par ou �mpar.
// O programa deve informar se o n�mero � par,
// caso afirmativo informar tamb�m se � ou n�o maior que 15
// ou se o n�mero � �mpar, caso afirmativo informar se � ou n�o menor que 50.

#include <stdio.h>
int main(){
	
	int num;
	
	//Entrada de dados
	printf("Insira um n�mero inteiro: ");
	scanf("%d", &num);
	//processamento par ou impar
	if (num%2==0)
	{
		//Sa�da par ou impar
	
		printf("O n�mero %d � par\n", num);
			//sa�da maior ou n�o que 15
			if(num>15){
				printf("O n�mero %d � maior que 15\n", num);
			}else{
				printf("O n�mero %d n�o � maior que 15\n", num);
			}
			
	}
	else{
		//Sa�da par ou impar
	
		printf("O n�mero %d � impar\n", num);
		//sa�da impar menor ou n�o que 50
			if(num<50){
				printf("O n�mero %d � menor que 50\n", num);
			}
			else{
				printf("O n�mero %d n�o � menor que 50\n");
			}
	}
	

	
	
	
}
