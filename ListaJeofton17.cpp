/*O quadrado de um n�mero natural N � dado pela soma dos primeiros n�meros �mpares consecutivos.
Por exemplo, 1^2=1, 2^2=1+3, 3^2=1+3+5, 4^2=1+3+5+7, etc. Dado um n�mero n, calcule seu quadrado usando a soma de �mpares ao inv�s de produto.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int impar = 1, quad = 0, nmr, i;
	
//entrada: Guardar o numero que o usuario digitar e jogar em um la�o de repeti��o

  printf("Digite o valor: ");
  scanf("%d",&nmr);  

  for (i = 0; i < nmr; i++) {
//processo: Somar o quadrado com todos os numeros impares (come�ando do 1 e pulando de 2 em 2 numeros) ate o numero digitado pelo usuario
    quad += impar;
    impar += 2;
    printf("%d + ", impar);	
  }  

//Mostrar na tela o resultado da opera��o, mostrando o numero digitado e o valor do quadrado

  printf("\nO quadrado de %d � %d\n", nmr, quad);    
}
