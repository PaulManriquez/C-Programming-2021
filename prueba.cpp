//Pruebas
#include<stdio.h>
#include<math.h>
int main ()
{
	int k,potencia,potenciaN,numero,a,resta;
	a=3;
	for(k=1;k>=0;k--)
	{
		potencia=pow(2,k);
		numero=a;
		resta=numero-potencia;
		a=resta;
		potenciaN=pow(2,k-1);
//	printf("%d\t%d\t%d\t%d\t%d",potencia,numero,resta,a,potenciaN);

	
	if(resta>0)
	{printf("1");}
	
	if(resta==0)
	{printf("1");}
	
	if(a<0 && resta<0 )
	{
		printf("0");
	}
	
	if((resta/potenciaN)==0)
    {printf("0"); k--;}	
//	printf("\n");
	}
	
	
	return 0;
}
