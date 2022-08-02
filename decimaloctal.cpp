//decimal - octal
#include<stdio.h>
#include<math.h>
int main ()
{
	int ii; //Variable de inicio de ciclo

	for(ii=1;ii<=256;ii++)
	{
		int b=0,a=0,cont=0,nn=0; //¡¡¡¡¡Importante resetear los numeros debido al siguiente ciclo 	
	
	b=ii; //necesario para compararlo mas adelante y no se pierda
	nn=ii;	// the same...
	do{	
	a=nn/8;
	nn=a;		//Dentro del do contamos el numero de divisiones necesarias para guardar dentro del 
	cont++;     //vector el numero de posiciones
	}while(nn!=0); //si es diferente de 0 , se detine y ya sabemos el numero de divisiones necesarias
	
	//printf("%d- %d\n",ii,cont);
	
	cont=cont-1;	//Necesario, devido a que los espacios del vector comienzan de 0 a n 
int nDiv[cont];
int i,Div=0,Mod=0,j; //¡¡¡¡¡Importante resetear los numeros debido al siguiente ciclo

for(i=cont;i>=0;i--)	// los almacena de la ultima casilla a la primera
{
	Div=b/8;
	Mod=b%8;	//logica para obtener los numeros base octal
	b=Div;
	nDiv[i]=Mod;
	}	
for(j=0;j<=cont;j++)
{
printf("%d",nDiv[j]);	//Mostramos el orden en que deben ser mostrados los numeros 
}
printf("\n");
}


	return 0;
}
