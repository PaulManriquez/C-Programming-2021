/* Suma, resta, multiplicación,division y modulo*/
#include<stdio.h>
main()
{
	int a,b,suma,resta,mult,div,mod;
	
	printf("Dame el primer numero:");
	scanf("%d",&a);
	printf("\n");
	
	printf("Dame el segundo numero:");
	scanf("%d",&b);
	printf("\n");
	
	suma= a+b;
	resta=a-b;
	if(resta < 0)
	{
	resta=resta*-1;
	}
	
	mult=a*b;
	div=a/b;
	mod=a%b;
	
	printf("Suma:%d",suma);
	printf("\n");
	
	printf("Resta:%d",resta);
	printf("\n");	
	
	printf("Mult:%d",mult);
	printf("\n");
	
	printf("Division:%d",div);
	printf("\n");
	
	printf("Modulo:%d",mod);
	printf("\n");
	
	return 0; 
}
