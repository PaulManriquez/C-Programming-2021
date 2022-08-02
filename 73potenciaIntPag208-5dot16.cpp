#include<stdio.h>
#include<math.h>
int potenciaInt(int base, int exponente);
int main(){
	int b,e;
	printf("Ingrese la base:");
	scanf("%d",&b);
	printf("\nIngrese el exponente:");
	scanf("%d",&e);
	printf("%d a la %d es:%d",b,e,potenciaInt(b,e));
	return 0;
}
int potenciaInt(int base, int exponente){
	int i,a;
	if(exponente==0)
	{
		return 1;
	}
	else{
		a=1;
	for(i=0;i<exponente;i++){
		
		a=base*a;
		//printf("%d-",base);
	}
	return a;	
	}
	
}
