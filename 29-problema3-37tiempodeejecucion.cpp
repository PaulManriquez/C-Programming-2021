//Tiempo de procesamiento de la computadora
#include<stdio.h>
int main ()
{
	int cont=1;
	
	while(cont<=300000000)
	{
	if(cont==100000000 || cont==200000000 || cont==300000000)
	{
	printf("Cont:%d",cont);	
	printf("\n");
		}	
	cont++;
	}
	
	return 0;
}
