#include<stdio.h>

int Drawcuadrado(int lado);

int main(){
	int L;
	printf("Introduzca las dimensiones del cuadrado:");
	scanf("%d",&L);

	Drawcuadrado(L);

	return 0;
}

int Drawcuadrado(int lado){
	int i,j;
	
	for(i=0;i<lado;i++){
		for(j=0;j<lado;j++){
			printf("*");
		}
	printf("\n");
	}
	
}
