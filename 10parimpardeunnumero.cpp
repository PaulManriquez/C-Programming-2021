/*Programa que te dice si un numero es par o impar */
#include<stdio.h>
main()
{
	int n1,res;
	
	printf("Dame el numero para determinar si es par o impar:");
	scanf("%d",&n1);
	
	res=n1%2;
	
	if(res==0)
	{printf("Numero %d es par",n1);}
	
	if(res==1)
	{printf("Numero %d es impar",n1);}
	
	return 0;
}
