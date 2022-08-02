//Programa 2.10 Floor Pag 207
#include<stdio.h>
#include<math.h>
int main(){
	
	int n,i;
	float nn;
	printf("¿Cuantos numeros desea ingresar?:");
	scanf("%d",&n);
	float VecNum[n];
	
	for(i=0;i<n;i++){
	printf("Ingresa el numero %d:",i+1);
	scanf("%f",&nn);
	VecNum[i]=nn;	
	}
	printf("\n");
	int j;
	float y,y1;
	printf("Numero\tOriginal\tFloor");
	for(j=0;j<n;j++){
		y1=VecNum[j];
		y= floor (y1 + .5);////////<<<<<<<<<<<<<<<
		printf("\n%d\t %.3f\t\t%.3f",j+1,VecNum[j],y);
	}
	printf("\nRedondea el numero al entero mas cercano por que le estamos sumando .5");
	float x=1,yy;
	yy=floor(x*10+.5)/100;
	printf("\nValor de yy:%f",yy);
	
	return 0;
}
