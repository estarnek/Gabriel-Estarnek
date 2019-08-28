#include <stdio.h>

int main () {
	int fah, convert;
	printf("Digite a temperatura em Fahrenheint: ")
	;scanf("\n%d", &fah);
	convert=(fah-32)/1.8;
	printf("A temperatura em Celsius e: \n%d", convert);
}
