//Fa�a um programa que l� o pre�o de um produto e inflaciona esse pre�o em 10% se ele
//for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: n�o use o comando "if"
//ou o operador de condi��o "?"

#include <stdio.h>
int main(){
	
	int price, i=0, j=0;
	printf("Digite o valor do produto: ");
	scanf("%d", &price);
	
	//usar o la�o de repeti��o while para uma �nica repeti��o, por isso a vari�vel i e j iniciarem em 0
	// e receberem o ++ no final do c�digo
	
	//o operador && (conjun��o e) se aplica do mesmo jeito aqui como posteriormente,
	//cria uma segunda condi��o de checagem para garantir o la�o de repti��o �nica
	while (price <100 && i<1){
	
		price = price*0.1+price;
		printf("%d", price);
		i++;
		//importante o return 0 para n�o executar o c�digo duas vezes e ele quebrar
		return 0;
	}
	
	do{
		price = price *0.2+price;
		printf("%d", price);
		j++;
	}
	
	
	while(price>=100 && j<1);
	
	
	




}

