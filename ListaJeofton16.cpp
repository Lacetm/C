//Dados um número natural n, exiba seu fatorial n!. (0,1)

#include <stdio.h>
int main(){
	
	double fatorial, n;
	
	printf("Digite um número natural: ");
	scanf("%lf", &n);
	

	for(fatorial = 1; n > 1; n = n - 1)
		fatorial= fatorial*n;
		printf("a fatorial é igual a %lf", fatorial);
}
