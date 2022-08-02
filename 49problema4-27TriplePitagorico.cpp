//Triple pitagoras
#include<stdio.h>
#include<math.h>
int main ()
{
	int i=1,ii=1,iii=1;
	int a,b,c;
	
	for(iii=1;iii<=500;iii++)
	{
	for(ii=1;ii<=500;ii++)
	{
	for(i=1;i<=500;i++)
	{
	a=pow(i,2);
	b=pow(ii,2);
	c=pow(iii,2);
	if((a+b)==c)
	{
	printf("%d\t%d\t%d",i,ii,iii);	
	printf("\n");
	}
	
	}	
	}
	}
	
	
	
	return 0;
}
