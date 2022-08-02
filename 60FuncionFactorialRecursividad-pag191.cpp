//Funcion factorial recursiva
#include<stdio.h>

long factorial( long numero); //prototipo de funcion 

int main()
{
	int i; // contador o long numero
	
	//Repite 11 veces durante cada iteracion calcula el factorial de i y despliega el resultado
	for(i=0;i<=10;i++)
	{
		printf("%2d!=%1d\n",i,factorial(i));
		
	}
	
	return 0;
}

long factorial (long numero)
{
	if(numero<=1){
		return 1;
	}
	else{
		return (numero * factorial(numero-1));
	}
		
}
