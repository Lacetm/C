//Escreva  um  programa  que  leia  3  notas  de  um  aluno  e  a  m�dia  (ME)
//  das  notas  dos exerc�cios realizados por ele.
// Calcular a m�dia de aproveitamento, usando a f�rmula: 
//MA = (N1 + N2*2 + N3*3 + ME)/7. 
//A partir da m�dia, informar o conceito de acordo com a tabela:
//Categoriza��o
	//maior ou igual a 9 A 
//maior ou igual a 7.5 e menor que 9  B 
//maior ou igual a 6 e menor que 7.5  C 
//maior ou igual a 4 e menor que 6 D 
//menor que 4 E 
	 


#include <stdio.h>
int main(){
	int cond=1;
	float nota1, nota2, nota3, media, MA;



	while(cond==1){
	//Entrada de dados
	printf("Insira a PRIMEIRA nota do aluno: ");
	scanf("%f", &nota1);
	printf("Insira a SEGUNDA nota do aluno: ");
	scanf("%f", &nota2);
	printf("Insira a TERCEIRA nota do aluno: ");
	scanf("%f", &nota3);
	
	
	
	//Processamento da m�dia
	media = (nota1+nota2+nota3)/3;
	printf("A m�dia do aluno foi: %f\n", media);
	MA = (nota1 + nota2*2 + nota3*3 + media)/7;
	
	if (MA>=9)
		printf("Sua m�dia de aproveitamento foi o conceito A\n");
		
	if (MA>=7.5 && MA<9)
	printf("Sua m�dia de aproveitamento foi o conceito B\n");
	
	if (MA>=6 && MA<7.5)
		printf("Sua m�dia de aproveitamento foi o conceito C\n");
	
	if (MA>=4 && MA<6)
		printf("Sua m�dia de aproveitamento foi o conceito D\n");
	
	if (MA<4)
		printf("Sua m�dia de aproveitamento foi o conceito E\n");
		
	printf("\nDeseja avaliar outro aluno?");
	scanf("%d", &cond);
	}
	
	if(cond==2){
		printf("Sistema encerrado.");
	}
	//Loop
	
	
	
}
