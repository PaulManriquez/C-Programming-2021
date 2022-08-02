//Programa 5.4 Funciones hipotenusa el menor instrucciones int a float 
#include<stdio.h>
#include<math.h>

double hipotenusaa(double lado1, double lado2); 
int funcionMenor(int x, int y,int z);
void instrucciones(void);
int intAfloat(int valorint);
int main(){
	
	instrucciones();
	
	double x1,x2;
	printf("Introduce el lado 1:");
	scanf("%lf",&x1);
	printf("Introduce el lado 2:");
	scanf("%lf",&x2);
	
	hipotenusaa(x1,x2);
	printf("\n");
	
	int a,b,c;
	printf("Introduce el numero 1:");
	scanf("%d",&a);
	printf("Introduce el numero 2:");
	scanf("%d",&b);
	printf("Introduce el numero 3:");
	scanf("%d",&c);
	funcionMenor(a,b,c);
	printf("\n");
	
	int Aint;
	printf("Dame el valor entero a flotante:");
	scanf("%d",&Aint);
	intAfloat(Aint);
	
	return 0;
}

double hipotenusaa(double lado1, double lado2){
	double hipotenusa;
	hipotenusa= sqrt(pow(lado1,2) + pow(lado2,2));
	printf("El valor de la hipotenusa es:%.3lf",hipotenusa);
}

int funcionMenor(int x,int y,int z){
	int n[]={x,y,z};
	int A,i;
	for(i=0;i<=2;i++){
		printf("Numero %d ingresado:%d\n",i+1,n[i]);
	}
	for(i=0;i<=2;i++){
		if(n[i]>=A)
		{
			A=n[i];
		}
	}
	printf("El mayor es:%d",A);
}

void instrucciones(){
	printf("Programa que te dice mediante funciones - Hipotenusa, elMenor,instruciones e intAfloat\n");
	return;
}
int intAfloat(int valorint){
	
	float nuevoNumero;
	nuevoNumero=valorint;
	printf("Tu numero en float es:%.3f",nuevoNumero);
	
}
