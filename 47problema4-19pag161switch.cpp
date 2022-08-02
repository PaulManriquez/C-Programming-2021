//Problema 4.19
#include<stdio.h>
int main ()
{
	float Total,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0;
	int a;
	
	printf("Introduce -1 para finalizar\n");
	
	while(a!=-1)
	{
		printf("Introduce el numero del producto:");
		scanf("%d",&a);
		
		switch (a)
		{
			case 1:
				cont1+=2.98;
				break;
			case 2:
				cont2+=4.50;
				break;
			case 3:
				cont3+=9.98;
				break;
			case 4:
				cont4+=4.49;
				break;	
			case 5:
				cont5+=6.87;
				break;
			case -1:
				break;
			default:
					printf("No se encuentra el producto en el inventario\n");		
			break;
		}
		
		
	}
	
	Total=cont1+cont2+cont3+cont4+cont5;
	printf("El total fue:%.3f",Total);
	
	return 0;
}
