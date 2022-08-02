#include<stdio.h>
#include<math.h>
long potencia(long base,long exponente);
int main(){
	
	long b,e,resultado;
	
	printf("Introduce la base:");
	scanf("%d",&b);
	printf("\nIntroduce el exponente:");
	scanf("%d",&e);
	resultado=potencia(b,e);
	printf("\nEl resultado es:%d",resultado);
	return 0;
}
long potencia(long base,long exponente){
	if(exponente==1){
		return base;
	}
	else{
		return base*potencia(base,exponente-1);
	}
}
