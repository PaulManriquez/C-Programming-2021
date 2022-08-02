//Des encriptacion del programa 34 problema3-46
#include<stdio.h>
int main ()
{
	int n,a1,a2,a3,a4,b1,b2;
	int x,y=1,n1,n2,n3,n4;
	int d1,d2,d3,total;
	
	printf("Dame el numero a desencriptar:");
	scanf("%d",&n);
	
	a1=n/1000;
	b1=n%1000;
	a2=b1/100;
	b2=b1%100;
	a3=b2/10;
	a4=b2%10;
	
	printf("\na1:%d - a2:%d - a3:%d - a4:%d ",a1,a2,a3,a4);
	printf("\n");
	
	while(y<=9)
	{
		x=y+7;
	
		if( x%10 == a1)
		{
			n1=y;
		}
		
		if( x%10 == a2)
		{
			n2=y;
		}
		
		if( x%10 == a3)
		{
			n3=y;
		}
		
		if(x %10 == a4)
		{
			n4=y;
		}
		
		y++;
	}
	printf("\nn1:%d - n2:%d - n3:%d - n4:%d ",n1,n2,n3,n4);
	printf("\n");
	
	d1=n3*1000;
	d2=n2*100;
	d3=n1*10;
	total=d1+d2+d3+n4;
	printf("\nEl numero del cual fue encriptado es:%d",total);
	
	return 0;
}
