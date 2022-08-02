//
#include<stdio.h>
int main ()
{
	int n,n1=1,numero;
	float promedio=0,cont=0;
	printf("Cantidad de enteros que quieras sumar:");
	scanf("%d",&n);
	
	for(n1=1;n1<=n;n1++)
	{
		printf("\nNumero %d :",n1);
		scanf("%d",&numero);
	
		if(numero==9999)
		{
			break;
		}
		
		cont+=numero;
		printf("\nCont=%.3f",cont);		
	}
	
	promedio=cont/n;
	printf("La suma es:%.3f  promedio:%.3f",cont,promedio);
	return 0;
}
