//Programa importe carros pag 207 ejercicio 5.9
#include<stdio.h>
#include<math.h>

float calculaImporte(float horas);

int main(){
	
	int i;
	float hrs,importe;	
	printf("Automovil\tHoras\tImporte\n");		
	
	for(i=0;i<=2;i++){
		printf("%2d\t\t",i+1);
		scanf("%f",&hrs);
		printf("  ");
		importe=calculaImporte(hrs);
		printf("%-2f",importe);
	}
	
	return 0;
}

float calculaImporte(float horas){
	
	float a,resta,total;

	if(horas<=3){
		return 2;
	}
	else if (horas==24){
		return 10;
	}
	else{
		resta=horas-2;
		a=ceil(resta);
		total=a*2;
		return total;
	}
	
}
