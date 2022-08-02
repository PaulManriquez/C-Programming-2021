//Astericos adyacentes
#include<stdio.h>
int main ()
{
	int n1,n2,n3,n4,n5,i=1;
	
	
	printf("Dame el numero 1:");
	scanf("%d",&n1);
	
	printf("Dame el numero 2:");
	scanf("%d",&n2);
	
	printf("Dame el numero 3:");
	scanf("%d",&n3);
	
	printf("Dame el numero 4:");
	scanf("%d",&n4);
	
	printf("Dame el numero 5:");
	scanf("%d",&n5);
	
	if(n1<=30 && n1>=1)
	{
		for(i=1;i<=n1;i++)
		{
			printf("*");
		}
	}
	
	printf("\n");
	
	if(n2<=30 && n2>=1)
	{
		for(i=1;i<=n2;i++)
		{
			printf("*");
		}
	}
	
	printf("\n");
	
	if(n3<=30 && n3>=1)
	{
		for(i=1;i<=n3;i++)
		{
			printf("*");
		}
	}
	
	printf("\n");
	
	if(n4<=30 && n4>=1)
	{
		for(i=1;i<=n4;i++)
		{
			printf("*");
		}
	}
	
	printf("\n");
	
	if(n5<=30 && n5>=1)
	{
		for(i=1;i<=n5;i++)
		{
			printf("*");
		}
	}

	
	return 0;
}
