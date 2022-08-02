//Eleva x a la potencia y
#include<stdio.h>
int main()
{
	int x,y;
	int resp=1;
	int cont=1;
	printf("Dame el valor de x:");
	scanf("%d",&x);
	
	printf("\nDame el valor de y:");
	scanf("%d",&y);
	
	while(cont<=y)
	{
		
		resp*=x;
		printf("::%d",resp);	
		cont++;
	}
	
	printf("\nEl resultado es : %d",resp);
	return 0;
}
