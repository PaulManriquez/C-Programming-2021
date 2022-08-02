//Calcular las aproximaciones de pi
#include<stdio.h>
int main ()
{
	float subpi,pi=4,a=3,b=5;
	int n=1;
	
	while(n<=100)
	{
	
	subpi=((-4/a)+(4/b));
	pi+=subpi;
	a=a+4;
	b=b+4;
	n++;
//	printf("%.3f",pi);	
	}
	printf("%.3f",pi);
	
	return 0;
}
