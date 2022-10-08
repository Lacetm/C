/*18) Faça um programa C que leia dez números que representam as notas de dez alunos de
uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada
de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma
que as notas são informadas corretamente no intervalo de 1 a 10. (0,1)*/
#include <stdio.h>

int main(){
	
	int i, maior, menor;
	int nota[11];
	float media, soma;
	
	for(i=1;i<=10;i++){
	do{
	
    	printf("Notas [%d]: ", i);
		scanf("%d", &nota[i]);
	}while((nota[i]<0) || (nota[i]>10));
}

	for(i=1;i<=10;i++){
	soma = (soma + nota[i]);
}
	media = soma/10;
	

    for(i=1; i<=10; i++){
       if(nota[i]>maior){
            maior=nota[i];
        }
    }
    for(i=1; i<=10; i++){
    if(i==1){menor=nota[i];}
       if(nota[i]<menor){
            menor=nota[i];
        }
    }
		printf("Soma das notas: %.1f", soma);
		printf("\nMedia das notas: %.1f", media);
		printf("\nMaior nota: %d", maior);
		printf("\nMenor nota: %d", menor);
}
