//implemente  um  programa que solicita  as  notas  das  duas  provas  feitas por  cada  um  dos 
//alunos de uma turma (as notas t�m de estar no intervalo [0 10]) e imprime para cada um a 
//m�dia das notas. O programa deve parar imediatamente ap�s ter sido digitado o valor 50 para 
//a nota da primeira prova. 
#include <stdio.h>
int main(){
	int cond=1;
	float nota1, nota2, media;

		
	while(cond==1){
		float nota1, nota2, media;
//Entrada de dados das duas provas
	printf("Insira a primeira nota: ");
	scanf("%f", &nota1 );
		if (nota1==50|| nota1<0 || nota1>10 || nota2<0 || nota2>10){
			printf("Entrada Inv�lida!");
			return 0;
		}
	printf("Insira a segunda nota: ");
	scanf("%f", &nota2);
	
			
	
// Processamento das m�dias
	media = (nota1+nota2)/2;
	printf("M�dia: %f\n", media);
	
	printf("Deseja avaliar mais um aluno? \n[1] Sim \n [2] N�o \n");
	scanf("%d", &cond);
		
		
	}
//Condi��o de parada	
	
}

