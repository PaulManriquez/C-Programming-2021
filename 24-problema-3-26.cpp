//Programa 3.26
#include<stdio.h>
int main ()
{
	int cont=3;
	printf("A\tA+2\tA+4\tA+6");
	while(cont<=15)
	{
		printf("\n%d",cont);
		printf("\t%d",cont+2);
		printf("\t%d",cont+4);
		printf("\t%d",cont+6);
		cont+=3;
	}
	
	
	return 0;
}
