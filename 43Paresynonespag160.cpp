//Programas 4.12 y 4.13
#include<stdio.h>
int main ()
{
	int i=1,j=1,suma=0,mult=1;
	
	for(i=1;i<=30;i++)
	{
		if(i%2==0)
		{
			suma+=i;
			printf("Suma=%d\n",suma);
		}
	}
	printf("\nSuma total=%d\n\n",suma);
	
	while(j<=15)
	{
		if(j%2==1)
		{
			mult*=j;
			printf("Multiplicacion:%d\n",mult);
		}
		j++;
	}
	printf("\nMultiplicacion total:%d",mult);
	return 0;
}
