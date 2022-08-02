/*Multiplo de un numero*/
#include<stdio.h>
main ()
{
	int n1,n2,Div,Modulo;
	
	printf("Dame el primer numero:");
	scanf("%d",&n1);
	
	printf("Dame el segundo numero:");
	scanf("%d",&n2);
	
	
	Modulo=n1%n2;
	
	if(Modulo==0)
	{
		printf("El numero %d es multiplo de %d",n1,n2);
	}
	printf("\n");
	if(n1 < n2)
	{
		Modulo=n2%n1;
		
		if(Modulo==0)
		{printf("El numero %d es multiplo de %d",n1,n2);}
		
		//printf("El numero %d no es multiplo de %d",n1,n2);
	}
	
	return 0;
}
