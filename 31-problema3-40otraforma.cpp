//Programa 3.40 despliegue en pantalla 
#include<stdio.h>
int main ()
{
	int cont1=1,cont2=1,cont3=1;
	
	while(cont1<=4)
	{
		while(cont2<=8)
		{

			printf("* ");
		
			cont2++;
		}
		
		printf("\n");
		
		while(cont3<=8)
		{
			printf(" *");
			cont3++;
		}
			printf("\n");
		cont1++;
		cont2=1;
		cont3=1;
	}
	
	return 0;
}
