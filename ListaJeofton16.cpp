//Dados um n�mero natural n, exiba seu fatorial n!. (0,1)

#include <stdio.h>
int main(){
	
	double fatorial, n;
	
	printf("Digite um n�mero natural: ");
	scanf("%lf", &n);
	

	for(fatorial = 1; n > 1; n = n - 1)
		fatorial= fatorial*n;
		printf("a fatorial � igual a %lf", fatorial);
}
