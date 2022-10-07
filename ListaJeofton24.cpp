#include <stdio.h>

int main(){	
	
	int quant[6], val;	
	
	printf("Digite a quantia em dinheiro para saber as cedulas equivalentes: ");
	scanf("%d", &val);
	
	quant[0] = val/100;
	val -= (quant[0]*100);
	
	quant[1] = val/50;
	val -= (quant[1]*50);
	
	quant[2] = val/20;
	val -= (quant[2]*20);
	
	quant[3] = val/10;
	val -= (quant[3]*10);
	
	quant[4] = val/5;
	val -= (quant[4]*5);
	
	quant[5] = val/1;
	val -= (quant[5]*1);
	
	
	printf("Tem %d nota(s) de 100\n", quant[0]);
	printf("Tem %d nota(s) de 50\n", quant[1]);
	printf("Tem %d nota(s) de 20\n", quant[2]);
	printf("Tem %d nota(s) de 10\n", quant[3]);
	printf("Tem %d nota(s) de 5\n", quant[4]);
	printf("Tem %d nota(s) de 1\n", quant[5]);
	
}
