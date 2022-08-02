//programa 3.24 Serie de 10 numeros y determine e imprima el mayor de estos 
#include<stdio.h>
int main ()
{
	int n,cont=1,b=0,d,a=0;
		
	while(cont<=10)
	{	
		printf("Introduce el numero %d:",cont);
		scanf("%d",&n);
		if(n>a)
		{
			a=n;
		}
		cont++;
		}	
	
	printf("El numero mayor fue:%d",a);
	return 0;
}
