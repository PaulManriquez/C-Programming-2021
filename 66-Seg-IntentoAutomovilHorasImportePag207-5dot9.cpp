//Un estacionamiento cobra... 
#include<stdio.h>
#include<math.h>
float calculaImporte(float horas );

int main(){
	
	int Nautos,i;	
	
	printf("¿Cuantos automoviles fueron?:");
	scanf("%d",&Nautos);
	
	float Nnautos[Nautos];
	float hrs,Thrs=0;
	
	for(i=0;i<Nautos;i++){
	printf("Ingrese el total de horas del auto %d:",i+1);
	scanf("%f",&hrs);	
	Nnautos[i]=hrs;
	Thrs+=hrs;
	}
	printf("\n");
	int j;
	float Timporte=0,Importe;
	printf("Automovil\tHoras\tImporte\n");
	for(j=0;j<Nautos;j++){
		Importe=calculaImporte(Nnautos[j]);
		printf("%d\t\t%.3f\t  %.3f\n",j+1,Nnautos[j],Importe);
		Timporte+=Importe;
	}
	
	printf("Total\t\t%.3f\t  %.3f",Thrs,Timporte);
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
