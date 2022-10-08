/*O quadrado de um número natural N é dado pela soma dos primeiros números ímpares consecutivos.
Por exemplo, 1^2=1, 2^2=1+3, 3^2=1+3+5, 4^2=1+3+5+7, etc. Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés de produto.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int impar = 1, quad = 0, nmr, i;
	
//entrada: Guardar o numero que o usuario digitar e jogar em um laço de repetição

  printf("Digite o valor: ");
  scanf("%d",&nmr);  

  for (i = 0; i < nmr; i++) {
//processo: Somar o quadrado com todos os numeros impares (começando do 1 e pulando de 2 em 2 numeros) ate o numero digitado pelo usuario
    quad += impar;
    impar += 2;
    printf("%d + ", impar);	
  }  

//Mostrar na tela o resultado da operação, mostrando o numero digitado e o valor do quadrado

  printf("\nO quadrado de %d é %d\n", nmr, quad);    
}
