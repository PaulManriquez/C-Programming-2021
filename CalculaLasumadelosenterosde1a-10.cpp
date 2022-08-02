//Calcula la suma de los enteros del 1 al 10 
#include<stdio.h>
int main()
{
	int n=1,cont=0;
	
	while (n<=10)
	{
		cont+=n;
		n++;
	}
	
	printf("El total es:%d",cont);
	return 0;
}
