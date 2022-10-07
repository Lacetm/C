//Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele
//for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: não use o comando "if"
//ou o operador de condição "?"

#include <stdio.h>
int main(){
	
	int price, i=0, j=0;
	printf("Digite o valor do produto: ");
	scanf("%d", &price);
	
	//usar o laço de repetição while para uma única repetição, por isso a variável i e j iniciarem em 0
	// e receberem o ++ no final do código
	
	//o operador && (conjunção e) se aplica do mesmo jeito aqui como posteriormente,
	//cria uma segunda condição de checagem para garantir o laço de reptição única
	while (price <100 && i<1){
	
		price = price*0.1+price;
		printf("%d", price);
		i++;
		//importante o return 0 para não executar o código duas vezes e ele quebrar
		return 0;
	}
	
	do{
		price = price *0.2+price;
		printf("%d", price);
		j++;
	}
	
	
	while(price>=100 && j<1);
	
	
	




}

