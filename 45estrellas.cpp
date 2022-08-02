//Estrellas 
#include<stdio.h>
int main ()
{
	int i=1,j,h=1,cont=0,cont1=9;

	for(i=1;i<=10;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
			}	
		printf("\n");
	}
	
	printf("\n");
	
	for(i=10;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
			}	
		printf("\n");
	}
	
	printf("\n");
	
	for(i=10;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
			}	

		cont+=1;	
		printf("\n");

	for(h=1;h<=cont;h++)
	{
		printf(" ");
	}
	
	}
	
	printf("\n");
	
	for(i=1;i<=10;i++)
	{   
	
	for(h=1;h<=cont1;h++)
	{
		printf(" ");
	}
	
		for(j=1;j<=i;j++)
		{
			printf("*");
			}	

		cont1-=1;	
		printf("\n");

	
	}
		
	
	return 0;
}
