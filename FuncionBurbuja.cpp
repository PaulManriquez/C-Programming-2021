//Burbuja como funcion
#include<stdio.h>

int funcionBurbuja( int size );
enum Estatus{SI,NO};
int main(){

	int x,sino;
	enum Estatus estatusSiNo;
	
	printf("¿Cuantos numeros desea introducir?:");
	scanf("%d",&x);
	funcionBurbuja(x);
	printf("\n");
	printf("¿Desea ordenar mas numeros? SI(0) NO(1):");
	scanf("%d",&sino);
	if(sino==0)
	{estatusSiNo=SI;}
	else
	{estatusSiNo=NO;}
	while(estatusSiNo==SI)
	{
	int x;
	
	printf("¿Cuantos numeros desea introducir?:");
	scanf("%d",&x);
	funcionBurbuja(x);
	printf("\n¿Desea ordenar mas numeros? SI(0) NO(1):");
	scanf("%d",&sino);
	
	if(sino==1)
	{//printf("Gracias por su participacion"); 
	estatusSiNo=NO; }
	
	else {
	if(sino==0)
	{
	estatusSiNo=SI;
	}
}

}
printf("Gracias por su participacion");
return 0;
}

int funcionBurbuja(int size){
	
		int i,a,j,nn;
		size=size-1;
		int n[size];
	
	for(i=0;i<=size;i++){
		printf("Introduce el numero %d :",i+1);
		scanf("%d",&nn);
		n[i]=nn;
	}
	
	for(i=0;i<=size;i++){
		for(j=0;j<size;j++){
			if(n[j]>=n[j+1]){
				a=n[j];
				n[j]=n[j+1];
				n[j+1]=a;
			}
		}
	}
	
	for(i=0;i<=size;i++){
		printf("%d ",n[i]);
	}
}
