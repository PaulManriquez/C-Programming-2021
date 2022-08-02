#include<stdio.h>
char caracterLlenado(char Letra);
int main(){
	int L;
	char letra;
	
	printf("Introduzca la letra deseada:");
	scanf("%c",&letra);
	
	printf("Introduzca las dimensiones del cuadrado:");
	scanf("%d",&L);
	
	int i,j;
	
	for(i=0;i<L;i++){
		for(j=0;j<L;j++){
			caracterLlenado(letra);
		}
	printf("\n");
	}
	
	return 0;
}


char caracterLlenado(char Letra){
	printf("%c",Letra);
}
