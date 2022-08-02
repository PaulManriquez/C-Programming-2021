//Problema 3.17 kilometros por litro 
#include<stdio.h>
int main()
{
	float Litros,Kilometros,acomulado=0,promGeneral;
	float cont=0,div=0;
	float resultado;
	
	printf("introduzca los litros utilizados (-1 para terminar):");
	scanf("%f",&Litros);
    printf("Introduzca los kilometros conducidos:");
	scanf("%f",&Kilometros);

	while(Litros!=-1)
	{
		
	div=Kilometros/Litros;
	acomulado+=div;
	cont++;
	
	printf("Los kilometros por litro de este tanque fueron:%f",div);
	printf("\nDiv:%f-Acomulado:%f-cont:%f",div,acomulado,cont);
	
	printf("\n\n");
	
	printf("introduzca los litros utilizados (-1 para terminar):");
	scanf("%f",&Litros);
	if(Litros==-1)
	break;
    printf("Introduzca los kilometros conducidos:");
	scanf("%f",&Kilometros);
	
	}
	
	resultado=acomulado/cont;
	printf("\n El promedio general de kilometros/litro fue:%f",resultado);
	
	return 0;
}
