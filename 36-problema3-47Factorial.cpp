//factorial de un numero
#include<stdio.h>
int main ()
{
	int n,A,cont1=1,contn;
	
	printf("Dame tu numero para saber el factorial :");
	scanf("%d",&n);
	contn=n;
	while(cont1<n)
	{
		A=n;
		contn=contn*(A-cont1);
		
		cont1++;
	}

	printf("\nEl fatorial de %d es %d",n,contn);
	
	return 0;
}
