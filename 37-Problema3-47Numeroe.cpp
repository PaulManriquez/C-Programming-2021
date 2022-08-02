//Aproximaciones al numero e 
#include<stdio.h>
int main ()
{
	float factorial=1,e=1;
	int cont1=1,cont2=1,n;
	printf("Dame el numero de aproximaciones a e:");
	scanf("%d",&n);
	
	while(cont2<=n)
	{
		while(cont1<=cont2)
		{
			factorial=factorial*cont1;
			printf("Factorial:%f",factorial);
			printf("\n");
			cont1++;
		}
		e+=(1/factorial);
		printf("Valor de e:%f",e);
		printf("\n");
		cont2++;
	}
	printf("\nNumero e:%.5f",e);
	
	return 0;
}
