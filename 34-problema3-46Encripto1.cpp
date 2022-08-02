//Problema 3.46 pag 124
#include<stdio.h>
int main()
{
	int a1,a2,a3,a4,b1,b2,n;
	int c1,c2,c3,c4;
	int d1,d2,d3,Nencriptado; 
	
	printf("Dame el numero a encriptar:");
	scanf("%d",&n);
	
	a1=n/1000;
	b1=n%1000;
	a2=b1/100;
	b2=b1%100;
	a3=b2/10;
	a4=b2%10;
	
	printf("\na1:%d - a2:%d - a3:%d - a4:%d ",a1,a2,a3,a4);
	printf("\n");
	
	c1=(a1+7)%10;
	c2=(a2+7)%10;
	c3=(a3+7)%10;
	c4=(a4+7)%10;
	
	printf("\nc1:%d - c2:%d - c3:%d - c4:%d ",c1,c2,c3,c4);
	printf("\n");
	
	d1=c1*10;
	d2=c3*1000;
	d3=c2*100;
	Nencriptado=d1+d2+d3+c4;
	
	printf("\nNumero encriptado:%d",Nencriptado);
	
	return 0;
}
