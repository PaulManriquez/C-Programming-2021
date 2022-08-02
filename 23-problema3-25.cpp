//Programa 3.25
#include<stdio.h>
int main()
{
	int cont=1;
	
	printf("N\t10*N\t100*N\t1000*N");
	while(cont<=10)
	{
		printf("\n%d",cont);
		printf("\t%d",cont*10);
		printf("\t%d",cont*100);
		printf("\t%d",cont*1000);		
		cont++;
	}
	
	
	return 0;
}
