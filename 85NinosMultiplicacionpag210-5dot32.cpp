#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main(){
	
	srand(time(NULL));
	int n1,n2,Mult;
	int resp;
	char letra;
	int randOpc1 ,randOpc2;
	do{
		n1=1+(rand()%9);
		n2=1+(rand()%9);
		
		Mult=n1*n2;
		printf("¿Cuanto es %d por %d?:",n1,n2);
		
		do{
			scanf("%d",&resp);
			if(resp==Mult){
				randOpc1=1+(rand()%4);
				switch(randOpc1){
				case 1: printf("\nMuy bien"); break;
				case 2: printf("\nExcelente"); break;
				case 3: printf("\nBuen trabajo"); break;
				case 4: printf("\nManten ese buen rendimiento"); break;	
				}
				
			}
			else{
				randOpc2=1+(rand()%4);
				switch(randOpc2){
				case 1: printf("\nNo,por favor intenta de nuevo"); break;
				case 2: printf("\nIncorrecto, trata una vez mas"); break;
				case 3: printf("\nNo te rindas"); break;
				case 4: printf("\nNo, sigue intentando"); break;	
				}
				
			}
			}while(resp!=Mult);
				
		printf("\n¿Desea seguir ingresando? S (si) N (no):");
		scanf(" %c",&letra);
	}while(letra=='s');
	
	printf("\nGracias por jugar :)"); 
	return 0;
}
