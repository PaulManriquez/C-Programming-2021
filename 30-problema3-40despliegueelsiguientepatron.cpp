//3.40 Escriba un programa que desplique el siguiente patron en pantalla
#include<stdio.h>
int main ()
{
	int cont=1,a;
	
	while(cont<=8)
	{
		
		a=cont%2;
		if(a==1)
		{
		printf("* * * * * * * *");	
		}
		if(a==0)
		{
			printf(" * * * * * * * *");
		}
		printf("\n");
		cont++;
	}
	
	return 0;
}
