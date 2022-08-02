//Fibonaci 
#include<stdio.h>
int main ()
{
	int i,a,b,c;

	a=0;
	b=1;
	for(i=0;i<=6;i++){
		
		c=a+b;
		a=b;
		b=c;
		
	printf("%d\n",c);
	}
	printf("a:%d - b:%d",a,b);
	return 0;
}
