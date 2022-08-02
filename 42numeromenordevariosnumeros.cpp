//Menor de varios enteros 
#include<stdio.h>
int main ()
{
	int i=1,n1,n,a=0;
	
	printf("Dame el numero de veces que quieres que evalue:");
	scanf("%d",&n1);
	
	for(i=1;i<=n1;i++)
	{
		printf("Dame el numero:");
		scanf("%d",&n);
		
		if(i==1)
		{
			a=n;
		}
		
		if(n<=a)
		{
			a=n;
		}
		
	}
	
	printf("Numero menor:%d",a);
	return 0;
}
