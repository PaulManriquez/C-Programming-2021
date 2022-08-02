/* Circulo, perimetro y area */ 
#include<stdio.h>
main()
{
	float r,perimetro,area,diametro;
	printf("Ingrese el radio del circulo:");
	scanf("%f",&r);
	printf("\n");
	diametro=2*r;
	perimetro=diametro*3.14159;
	area=3.14159*r*r;
	printf("Diametro:%.3f",diametro);
	printf("\n");
	printf("Perimetro:%.3f",perimetro);
	printf("\n");
	printf("Area:%.3f",area);
	printf("\n");
	
	return 0;
}
