/*
Programa que define la funcion cuadrado.El usuario introduce numeros y se imprime el cuadrado de cada numero llamando la funcion
definida por el programador. 
El programa termina hasta que el usuario introduce el numero 0 */
#include<stdio.h>
#include<math.h>

float calcularCuadrado( float x);

int main ()
{
	float num;
	scanf("%f",&num);
	while(num!=0){
		//llamar la funcion que calcula el cuadrado de un numero 
		float cuadrado;
		cuadrado=calcularCuadrado(num);
		printf("%f %f \n",num,cuadrado);
		scanf("%f",&num);
	}
	
	return 0;
}

float calcularCuadrado( float x)
{
	float cuadrado;
	cuadrado=x*x;
	return cuadrado;
}
