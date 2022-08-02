//Escriba un programa que defina cuatro funciones para redondear al numero x de distintas maneras:
//5.11 pag 208
#include<stdio.h>
#include<math.h>
float redondeaAentero(float numero);
float redondeaAdecimas(float numero);
float redondeaAcentesimas(float numero);
float redondeaAmilesimas(float numero);

int main(){
	float x;
	printf("Introduzca x:");
	scanf("%f",&x);
	
	
	
	
	
	
	printf("%f\n%f\n%f\n%f\n%f",x,redondeaAentero(x),redondeaAdecimas(x),redondeaAcentesimas(x),redondeaAmilesimas(x));
			
	return 0;
}

float redondeaAentero(float numero){
	float y;
	y=floor(numero);
	return y;
}


float redondeaAdecimas(float numero){
	float y;
	y=floor(numero*10+0.5)/10;
	return y;
}


float redondeaAcentesimas(float numero){
	float y;
	y=floor(numero*10+0.5)/100;
	return y;
}


float redondeaAmilesimas(float numero){
	float y;
	y=floor(numero*10+0.5)/1000;
	return y;
}

