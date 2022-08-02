#include<stdio.h>
#include<math.h>
double hipotenusa(double lado1, double lado2);
int main(){
	
	int i=0,a,n1;
	double L1,L2;
	
	printf("¿Cuantos triangulos desea evaluar a saber su hipotenusa?:");
	scanf("%d",&n1);
	double lad1[n1];
	double lad2[n1];
	for(i=0;i<n1;i++){
		printf("%d",i+1);
		printf("   Lado 1:");
		scanf("%lf",&L1);
		lad1[i]=L1;
		printf("    Lado 2:");
		scanf("%lf",&L2);
		lad2[i]=L2;
	}
	printf("Triangulo\tLado1\tLado2\tHipotenusa\n");
	int j;
	for(j=0;j<n1;j++){
		printf("%d\t\t%.3f\t%.3f\t%.3f",j+1,lad1[j],lad2[j],hipotenusa(lad1[j],lad2[j])); printf("\n");
	}
	
	return 0;
}

double hipotenusa(double lado1, double lado2){
	double hipo;
	hipo=sqrt(pow(lado1,2)+ pow(lado2,2));
	return hipo;
}
