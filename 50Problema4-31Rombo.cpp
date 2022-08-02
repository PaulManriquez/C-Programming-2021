//Rombo con *
#include<stdio.h>
int main ()
{
	int a=1,b=1,c=1,d=7;
	int space=4,space2=1;
	int i=1,j=1,k=1,m=1;
	
	for(i=1;i<=5;i++)
	{
		while(a<=space)
		{
			printf(" ");
			a++;
		}
		for(j=1;j<=b;j++)
		{
			printf("*");
		}
		space=space-1;
		a=1;
		b+=2;
		printf("\n");
		
if(b>=10)
		{
		for(k=1;k<=4;k++)
		{
		while(c<=space2)
		{
			printf(" ");
			c++;
			}
		for(m=1;m<=d;m++)
		{
			printf("*");
				}		
		space2++;
		c=1;
		d-=2;
		printf("\n");		
				}		
		
		}



}
	
	
	return 0;
}
