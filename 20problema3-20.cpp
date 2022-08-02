//Programa 3.20
#include<stdio.h>
int main()
{
	float prestamo,taza,dias,MontoInteres;
	
	printf("Introduzca el monto del prestamo (-1 para terminar):");
	scanf("%f",&prestamo);
	
	while(prestamo!=-1)
	{
	
	
	printf("introduzca la tasa de interes:");
	scanf("%f",&taza);
	printf("Introduzca el periodo de prestamo en dias:");
	scanf("%f",&dias);
		
	MontoInteres=(prestamo*taza*dias)/365;
	printf("El monto de interes es:$%.3f",MontoInteres);
	
	printf("\n\n");
	printf("Introduzca el monto del prestamo (-1 para terminar):");
	scanf("%f",&prestamo);
			
	}
	
	return 0;
}
