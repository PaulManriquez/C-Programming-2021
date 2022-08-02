//5.22 pag 209
#include<stdio.h>
#include<math.h>

double PartEnteraCociente(double a , double b);
float ResiduoEntero(float c, float d);
int SeparandoEntero(int n1);
int main(){

	    double n1,n2;
		int opc,b;
	
		do{
		printf("Opcion (1) Calcular cociente y residuo\nOpcion (2) Separar numero\nOpcion a elegir:");
		scanf("%d",&opc);
		switch(opc){
			case 1:
					printf("Dame a:");
					scanf("%lf",&n1);
					printf("\nDame b:");
					scanf("%lf",&n2);
					////Parte entera cociente
					PartEnteraCociente(n1,n2);
					printf("\n");
					///Residuo entero
					ResiduoEntero(n1,n2);
					//Separando el numero entero
			break;
			
			case 2:
					int a;
					printf("\nIntroduce el numero a separar:");
					scanf("%d",&a);
					SeparandoEntero(a);
					break;
			default: 
			printf("Opcion no valida");
								
		}
		printf("\nDesea seguir en el menu? (1)Si (0)No:");
		scanf("%d",&b);
		printf("\n");
	}while(b==1);
	printf("Muchas Gracias :)");
	return 0;
}

double PartEnteraCociente(double a, double b){
		double reN,reEntero;
        reN= a/b;
		reEntero=floor(reN);
		
		 printf("\n%.3f  %.3f",reN,reEntero);	
}
float ResiduoEntero(float c , float d){
	float CoN,Coentero;
	CoN=fmod(c,d);
	Coentero=floor(CoN);
	printf("\n%.3f  %.3f",CoN,Coentero);
}

int SeparandoEntero(int n1){

int i=10,j=100,a=10,flag=0;
	int Modulo;
	do{
		
		if(n1>=0 && n1<=9){
			Modulo=a;
			printf("%d",n1);
			flag=1;
		}
		if(n1>=i && n1<=j-1){
			Modulo=a;
			flag=1;
		}
		else{
			a*=10;
			i*=10;
			j*=10;
		}
		
	}while(flag==0);
	
	//printf("\n%d",Modulo);
	printf("\nCalculando los numeros separados:");
	
	int Mdiv=n1,Mdiv2;
	
	do{
		Mdiv=Mdiv/Modulo;
		Mdiv2=n1%Modulo;
		
		printf("%d ",Mdiv);
		Mdiv=Mdiv2;
		Modulo=Modulo/10;
	}while(Modulo>0);
	
	
}
