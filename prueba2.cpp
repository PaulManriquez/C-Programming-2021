//Pruebas
#include<stdio.h>
#include<math.h>
int main ()
{
	int k,potencia,potenciaN,numero,a,resta;
	int Limite,j=0,cont=0;
	//a=3;
	
	for(j=0;j<=8;j++)
	{
	if(65<(pow(2,j)))
	{
	Limite=j-1; a=65;
	for(k=Limite;k>=0;k--)
	{
		potencia=pow(2,k);
		numero=a;
		resta=numero-potencia;
		a=resta;
		potenciaN=pow(2,k-1);
		cont+=1;
//	printf("%d\t%d\t%d\t%d\t%d",potencia,numero,resta,a,potenciaN);
	if(cont==1)
	{
		printf("1");
	}
	if(resta<potenciaN && resta>0)
	{ printf("0"); k--;
		}	
	if(resta>0 && cont>1 && potenciaN>1)
	{
		printf("1");
	}
	if(resta==0)
	{
		printf("1");
	}
	if(resta<0)
	{
		printf("0");
		//break;
	}
//	printf("\n");
	}
}

}
	return 0;
}
