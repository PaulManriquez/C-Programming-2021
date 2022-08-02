//Numero palíndromo 3.35 pag 124
#include<stdio.h>
int main()
{
	int n,a1,a2,a3,a4,a5,b1,b2,b3;
	
	printf("Dame el numero:");
	scanf("%d",&n);
	
	a1=n/10000;
	b1=n%10000;
	a2=b1/1000;
	b2=b1%1000;
	a3=b2/100;
	b3=b2%100;
	a4=b3/10;
	a5=b3%10;
	
/*	if(a5>=10)
	{break;}
	
	if(a1==0)
	{break;}
*/	
	printf("a1:%d , a2:%d , a3:%d , a4:%d , a5:%d ",a1,a2,a3,a4,a5);
	if(a1==a5 && a2==a4)
	{
		printf("\nEl numero %d es palindromo",n);
	}
	else
	{
		printf("\nNo es palindromo el numero %d",n);
	}
	
	return 0;
}

