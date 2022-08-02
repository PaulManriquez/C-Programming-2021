#include<stdio.h>
char caracterLlenado(char Letra);
int DrawCuadrado(int Lado);
int main(){
	int L;
	char letra;
	
	printf("Introduzca la letra deseada:");
	scanf("%c",&letra);
	caracterLlenado(letra);
	printf("Introduzca las dimensiones del cuadrado:");
	scanf("%d",&L);
	DrawCuadrado(L);
	
	return 0;
}


char caracterLlenado(char Letra){
	printf("%c",Letra);
}
int DrawCuadrado(int Lado){
	int i,j;
	
	for(i=0;i<Lado;i++){
		for(j=0;j<Lado;j++){
			caracterLlenado(letra);
		}
	printf("\n");
	}
	
}
