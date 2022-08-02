//Moneda lanzamiento
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void aparte();
int main(){
	
	int i;
	srand(time(NULL));
	for(i=1;i<=10;i++){
		
		aparte();	
		printf("\n");
	}
	
	
	
	return 0;
}
void aparte(){
	
	int Moneda;
	
	
	 Moneda=0+((rand()%2));
	
	if(Moneda==1){
		int C1=0;
		C1+=1;
		 printf("Cara:%d",C1);
	}
	else{
		 printf("Cruz:");
	}
}
