#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    int vet[5], i, maior = 0;
//Entrada
	memset(vet ,0, 5*sizeof(vet));
    for (i = 0; i < 5; i++){
        printf ("Digite um numero: ");
        scanf ("%d", &vet[i]);
        if (vet[i] > maior){
            maior = vet[i];
        }
    }
    printf("%d", maior);
}
