//Fibonaci libro pag 192

#include<stdio.h>
long fibonacci(long n); //prototipo de funcion

int main(){
	
	long resultado;
	long numero;
	
	printf("Introduzca un entero:");
	scanf("%d",&numero);
	
	resultado=fibonacci(numero);
	
	printf("Fibonacci( %d ) = %d\n",numero,resultado);
	
	return 0;
}

long fibonacci(long n)
{
	
if(n==0 || n==1){
	return n;
}	
else{
	return fibonacci(n-1)+fibonacci(n-2);
}

}
