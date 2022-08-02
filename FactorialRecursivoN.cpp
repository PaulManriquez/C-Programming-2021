//Factorial funcion recursiva
#include<stdio.h>

long factorial( long numero );
int main(){
	int n,a;
	printf("Introduce el numero del cual deseas saber el factorial:");
	scanf("%d",&n);
	a=factorial(n);
	printf("El factorial de %d es:%d",n,a);
	
	return 0;
}

long factorial(long numero){
	long fac;
	if(numero ==1 || numero ==0){
		return 1;
	}
	else{
		
		return (numero * factorial(numero-1));
	}
	
}
