//programa 3.24 Serie de 10 numeros y determine e imprima el mayor de estos 
#include<stdio.h>
int main ()
{
	int n,cont=1,a=0,b=0;
		
	while(cont<=10)
	{
		printf("Dame el numero %d:",cont);
		scanf("%d",&n);
		if(n>a)
		{
			b=a;
			a=n;
		}
		if(n>b && n<a)
		{
			b=n;
		}
		printf("%d - %d",b,a);
		cont++;
		printf("\n");
	}
	return 0;
}
