//Fa�a um programa que l� um conjunto de 10 valores inteiros e verifica se algum dos
//valores � igual a m�dia dos mesmos
#include <stdio.h>
#include <math.h>

int main(){
	
	int conjunto[10], i, sum, media,j;
	
	//Entrada de dados
	for(i=0; i<10;i++){
		printf("Insira um n�mero para acrescentar ao Conjunto: ");
		scanf("%d", &conjunto[i]);
	}
	
	//Processamento
	sum=0;
	for(i=0; i<10; i++){
		sum = conjunto[i]+sum;
		
	}
	printf("Soma=%d\n", sum);
	media= sum/10;
	printf("M�dia=%d\n", media);
	
	
	for(i=0;i<10;i++){
		while(j<1){
		
			if(conjunto[i]==media){
				printf("O valor do %d� numero no conjunto equivale a m�dia da soma de seus elementos\n", i);
				j++;
			}
			else{
				printf("Nenhum dos n�meros equivale a m�dia da soma de seus elementos");
				j++;
			}
		}
	}


}
