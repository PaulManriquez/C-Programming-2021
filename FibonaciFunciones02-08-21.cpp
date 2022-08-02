//Funcion fibonaci por mi 02/08/2021
#include<stdio.h>
long fibonaci(long numero);
int main (){
	int n;
	printf("Ingresa la iteracion de fibonaci que te interesa:");
	scanf("%d",&n);
	printf("\nEl valor es:%d",fibonaci(n));
	
	return 0;
}

long fibonaci(long numero)
{
	if(numero == 1){
		return 1;
	}
	else if(numero==0){
		return 0;
	}
	else{
		
		return fibonaci(numero-1)+fibonaci(numero-2);
	}
	
}
