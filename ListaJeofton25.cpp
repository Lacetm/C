//Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos
//valores é igual a média dos mesmos
#include <stdio.h>
#include <math.h>

int main(){
	
	int conjunto[10], i, sum, media,j;
	
	//Entrada de dados
	for(i=0; i<10;i++){
		printf("Insira um número para acrescentar ao Conjunto: ");
		scanf("%d", &conjunto[i]);
	}
	
	//Processamento
	sum=0;
	for(i=0; i<10; i++){
		sum = conjunto[i]+sum;
		
	}
	printf("Soma=%d\n", sum);
	media= sum/10;
	printf("Média=%d\n", media);
	
	
	for(i=0;i<10;i++){
		while(j<1){
		
			if(conjunto[i]==media){
				printf("O valor do %dº numero no conjunto equivale a média da soma de seus elementos\n", i);
				j++;
			}
			else{
				printf("Nenhum dos números equivale a média da soma de seus elementos");
				j++;
			}
		}
	}


}
