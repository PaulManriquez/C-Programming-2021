//Binario a decimal
#include<stdio.h>
int main ()
{
	int n,a1,a2,a3,a4,b1,b2;
	int a11,a22,a33,a44,SumT;
	
	printf("Dame el numero en binario a decimal:");
	scanf("%d",&n);
	
	a1=n%10;
	b1=n*0.1;
	a2=b1%10;
	b2=b1*0.1;
	a3=b2%10;
	a4=b2*0.1;
	
	a11=1*a1;
	a22=2*a2;
	a33=4*a3;
	a44=8*a4;
	SumT=a11+a22+a33+a44;
	
	
	printf("\n a1:%d , a2:%d , a3:%d , a4:%d",a1,a2,a3,a4);
	printf("\nNumero en decimal:%d",SumT);
	return 0;
}
