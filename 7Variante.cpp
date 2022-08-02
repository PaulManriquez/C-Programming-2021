/* suma,promedio,producto,menor y mayor */
#include<stdio.h>
main()
{
	int n1,n2,n3,sum,mult,menor,mayor,prom;
	
	printf("Dame los 3 numeros:");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	
	sum=n1+n2+n3;
	printf("Suma:%d",sum);
	printf("\n");
	
	prom=(n1+n2+n3)/3;
	printf("Promedio:%d",prom);
	printf("\n");
	
	
	mult=n1*n2*n3;
	printf("Producto:%d",mult);
	printf("\n");
	
	
	if (n1 <= n2 && n1 <= n3)
	{
	printf("Numero menor: %d",n1);
	printf(" \n");
	}
	
	if (n2 <= n1 && n2 <= n3)
	{
	printf("Numero menor: %d",n2);
	printf(" \n");
	}
	
	if (n3 <= n2 && n3 <= n1)
	{
	printf("Numero menor: %d",n3);
	printf(" \n");
	}
	
	if (n1 >= n2 && n1 >= n3)
	{
	printf("Numero mayor: %d",n1);
	printf(" \n");
	}
	
	if (n2 >= n1 && n2 >= n3)
	{
	printf("Numero mayor: %d",n2);
	printf(" \n");
	}
	
	if (n3 >= n2 && n3 >= n1)
	{
	printf("Numero mayor: %d",n3);
	printf(" \n");
	}
	return 0;
}
