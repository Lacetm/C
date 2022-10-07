//Codifique um programa que leia a quantidade de alunas e de alunos.
// Depois esse programa deve informar 
// se essa turma possui mais alunos ou mais alunas. 
//Se essa turma possuir a quantidade de alunas maior que a de alunos,
// informe o total de alunos dessa turma. 
//O programa deve verificar se a quantidade de alunos é igual a de alunas. 
#include <stdio.h>
int main(){
	
	int alunos, alunas, dif, som;
	
	printf("Por favor, insira a quantidade de alunos: ");
	scanf("%d", &alunos);
	printf("Por favor, insira a quantidade de alunas: ");
	scanf("%d", &alunas);
	
	if (alunos>alunas){
		dif = alunos - alunas;
		printf("Essa turma possui mais alunos que alunas\n");
		printf("A diferença de alunos para alunas é de %d estudantes", dif);
	}
	
	if (alunas>alunos){
		som = alunos + alunas;
		printf("Essa turma possui mais alunas que alunos\n");
		printf("o total de alunos dessa turma é: %d", som);
	}
	if (alunas==alunos){
		printf("A quantidade de alunos é igual a de alunas");
	}
	
	
}
