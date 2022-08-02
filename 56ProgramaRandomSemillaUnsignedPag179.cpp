#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i; //contador
	unsigned semilla;//Establece la semilla del generador de numero aleatorios
	
	printf("Introduzca la semilla:");
	scanf("%u",&semilla); //%u para unsigned
	
	srand(semilla);
	
	for(i=1;i<=10;i++){
		
		printf("%10d",1+(rand()%6));
		if(i%5==0){
			printf("\n");
		}
	}
	
	
	return 0;
}
