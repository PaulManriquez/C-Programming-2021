#include <stdio.h>
#include "Convert.h"
#define BITS 8   		//Macro para definir el ancho de bits de maximo

void binario(uint8_t Num){
    //Varibales locales de la funci�n
    int volatile Numero[BITS],i;
    uint8_t volatile n = Num;

    //Ciclo for para llenado de vector de numeros binarios a traves de la operaci�n modulo
    for(i=0;n>0;i++)
    {
        Numero[i]=n%2;
        n=n/2;
    }

    printf("\nEl numero en binario es =");

    //Impresi�n del numero binario
    for(i=i-1;i>=0;i--)
    {
        printf("%d",Numero[i]);
    }

}

