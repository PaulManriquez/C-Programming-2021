#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flip (void);

int main(){

	printf("Simulando el lanzamiento de una moneda:");
	printf("\n");
	
	int i,value,Ccruz=0,Ccara=0;
	srand(time(NULL));
	
	for(i=1;i<=100;i++){
	
		value= flip();
		if(value==0){
		Ccruz+=1;
	/*	printf("Cruz:%d",Ccruz);
		printf("\n");*/
	
		}
		else{
		Ccara+=1;
	/*	printf("Cara:%d",Ccara);
		printf("\n");*/
		}
	}	
	
	printf("Cara:%d - Cruz:%d",Ccara,Ccruz);
	return 0;
}
int flip (void){
	return rand()%2;
}
