//Numero e^x
//Aproximaciones al numero e 
#include<stdio.h>
int main ()
{
	float factorial=1,e=1;
	int cont1=1,cont2=1,n,potencia=1;
	printf("Dame el numero x de e:");
	scanf("%d",&n);
	
	while(cont2<=n)
	{
		while(cont1<=cont2)
		{	
			potencia*=n;
			factorial=factorial*cont1;
			printf("Potencia:%d",potencia);
			printf("\n");
			cont1++;
		}
		e+=(potencia/factorial);
		printf("Valor de e:%f",e);
		printf("\n");
		cont2++;
	}
	printf("\nNumero e:%.5f",e);
	
	return 0;
}
