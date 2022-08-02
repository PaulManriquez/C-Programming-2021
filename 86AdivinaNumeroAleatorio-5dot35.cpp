#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int numero,n;
	char resp;
	do{
		numero=1+(rand()%10);
		printf("¿Cual es el numero aleatorio?:");
		do{
			scanf("%d",&n);
			if(n==numero){printf("Excelente has acertado");}
			if(n<numero){printf("Mas arriba");}
			if(n>numero){printf("Mas abajo");}
		}while(n!=numero);
		printf("\n¿Desea seguir jugando?");
		scanf(" %c",&resp);
		printf("\n");
	}while(resp=='s');
	return 0;
}
