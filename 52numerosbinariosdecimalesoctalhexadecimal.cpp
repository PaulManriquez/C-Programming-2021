//Numeros decimales,binarios,octal y exadecimal
//Pruebas
#include<stdio.h>
#include<math.h>
int main ()
{
	int k,potencia,potenciaN,numero,a,resta;
	int Limite,j=0,i=1,n;
	//a=3;


	
	i=65;							
	for(j=0;j<=8;j++)
	{
	if(i<(pow(2,j)))
	{
	Limite=j-1; 
	a=i;
	for(k=Limite;k>=0;k--)
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
		break;
	}
	
	if((resta/potenciaN)==0)
    {printf("0"); k--;}	
//	printf("\n");
	}
}

}

printf("\n");

	return 0;
}
