//Problema 3.19
#include<stdio.h>
int main ()
{
	float venta,total;
	float comision;
	printf("Introduzca las ventas en pesos (-1 para terminar):");
	scanf("%f",&venta);
	
	while(venta!=-1)
	{
		comision=(venta*9)/100;
		total=200+comision;
		
		printf("El salario es:$%f",total);
		printf("\n\n");
	printf("Introduzca las ventas en pesos (-1 para terminar):");
	scanf("%f",&venta);
	}
	
	return 0;
 } 
