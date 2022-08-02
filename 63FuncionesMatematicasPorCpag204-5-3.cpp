//Funciones matematicas
#include<stdio.h>
#include<math.h>
int main(){
	
	float a1,a2,a3,a4,a5;
	
	a1=sqrt(900);
	printf("Raiz:%.3f\n",a1);
	a2=exp(1);
	printf("exponencial e^x:%.3f\n",a2);
	a3=log(2.718282);
	printf("logaritmo natural de x(base e):%.3f\n",a3);
	a4=log10(1);
	printf("logaritmo de x(base 10):%.3f\n",a4);
	a5=fabs(-5);
	printf("Valor absoluto de x:%.3f\n",a5);
	
	float b1,b2,b3,b4,b5;
	
	b1=fabs(-5);
	printf("Valor absoluto de x:%.3f\n",b1);
	b2=ceil(9.2);
	printf("Redondea x al entero mas pequeño no menor que x:%.3f\n",b2);
	b3=floor(9.2);
	printf("Redondea x al entero mas grande no mayor que x:%.3f\n",b3);
	b4=pow(2,7);
	printf("Eleva x a la y:%.3f\n",b4);
	b5=fmod(13.657,2.333);
	printf("Residuo de x/y como un numero de punto flotante:%.3f\n",b5);
	
	float n1,n2,n3;
	
	n1=sin(0);
	n2=cos(0);
	n3=tan(0);
	printf("Seno: %.3f \t Coseno: %.3f \t Tan: %.3f",n1,n2,n3);
	
	
	return 0;
}
