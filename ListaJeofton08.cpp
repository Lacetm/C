#include <stdio.h>
int main(){
	
	int i, j, num;
	
	//Entrada de dados
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	if (num%2==0){
		printf("Entrada inv�lida!");
		
	}
	else{
	
		//La�o de Repeti��o
		
						
			for ( i = 0; i<= (num / 2) + 1; i++){
				printf(" %d ", i);
				for (j = i + 1; j <= num - i; j++){
					
					printf(" %d", j);
					
					}
					printf("\n");
				for (j = 0; j < (i + 1) * 2; j++ ){
				
              	printf(" ");
              }
				
			}
			
			
				
		}
		
	
	
}
