//MCD de 2 numeros
#include<stdio.h>
int main(){
	
	int numero1,numero2;
	int residuo,mcd;
	
	printf("Numero 1: ");
	scanf("%d",&numero1);
	
	printf("Numero 2: ");
	scanf("%d",&numero2);
	
	do{
		residuo=numero1%numero2;	
		if(residuo!=0){
			numero1=numero2;
			numero2=residuo;
		}
		else{
			mcd=numero2;
		}
	}while(residuo!=0);
	printf("MCD:%d\n",mcd);
	return 0;
}
