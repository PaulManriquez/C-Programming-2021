#include <stdio.h>
#include "Convert.h"

int main() {
	uint8_t Numero;
	
	printf("Ingresa un numero dentro del rango de [0 - 255] : ");
	scanf("%i",&Numero);
    binario(Numero);
    printf(" ");
    return 0;
}

