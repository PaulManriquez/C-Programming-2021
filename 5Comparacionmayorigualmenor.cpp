/*Mayor o igual numero */
#include<stdio.h>
main()
{
	int n1,n2;
	
	printf("Dame el primer numero:");
	scanf("%d",&n1);
	printf("\n");
	
	printf("Dame el segundo numero:");
	scanf("%d",&n2);
	printf("\n");
	
	if(n1>n2)
	printf("Numero %d es mayor a numero %d",n1,n2);
	if(n1<n2)
	printf("Numero %d es menor a numero %d",n1,n2);
	if(n1==n2)
	printf("Ambos numeros son iguales: %d = %d",n1,n2);
	
	return 0;
}
