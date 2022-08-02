//Factorial de un numero
#include<stdio.h>
int main ()
{
	double n,fact=1;
	int i=1;
	
	printf("Dame el numero que quieras saber el factorial:");
	scanf("%lf",&n);
	
	for(i=1;i<=n;i++)
	{
		fact*=i;
		printf("%.1lf \t",fact);
	if((i%5)==0)
	{
		printf("\n");
	}
	
	}
	
	return 0;
}
