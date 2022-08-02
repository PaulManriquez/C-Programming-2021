//Formula general
#include<stdio.h>
#include<math.h>
int formulaGeneral(int a,int b, int c);
enum Estatus{SI,NO};
int main(){
	
	float x1,x2,x3;
	
	printf("Introduce A:");
	scanf("%f",&x1);
	
	printf("Introduce B:");
	scanf("%f",&x2);
	
	printf("Introduce C:");
	scanf("%f",&x3);

	printf("%.3f %.3f %.3f\n",x1,x2,x3);
	
	formulaGeneral(x1,x2,x3);
	
	enum Estatus estatusSiNo;
	int a;
	printf("\n¿Desea ingresar otra ecuacion?(0)SI (1)NO:");
	scanf("%d",&a);
	
	if(a==0){
		estatusSiNo=SI;
	}
	else{
		estatusSiNo=NO;
	}
	
	while(estatusSiNo==SI){
	
	float x1,x2,x3;
	
	printf("Introduce A:");
	scanf("%f",&x1);
	
	printf("Introduce B:");
	scanf("%f",&x2);
	
	printf("Introduce C:");
	scanf("%f",&x3);

	printf("%.3f %.3f %.3f\n",x1,x2,x3);
	
	formulaGeneral(x1,x2,x3);
	
	printf("\n¿Desea ingresar otra ecuacion?(0)SI (1)NO:");
	scanf("%d",&a);
	
	if(a==0){
		estatusSiNo=SI;
	}
	else{
		estatusSiNo=NO;
	}

		
	}
	printf("Muchas gracias :)");	
	return 0;
}

int formulaGeneral(int a,int b,int c){
	
	float rP1,rP2,rP3;
	float rN1,rN2,rN3;
		
	rP1= pow(b,2) + (-4*(a*c));
	if(rP1>=0){
	
	rP2= sqrt(rP1);
	rP3=((-1*b)+rP2) / (2*a); //Soluciones a la raiz positiva
	
	rN1= pow(b,2) + (-4*(a*c));
	rN2= sqrt(rN1);				
	rN3=((-1*b)-rN2) / (2*a); //Soluciones a la raiz negativa
	
	printf(" %.3f  %.3f ",rP3,rN3);

			}
	else{
		printf("No tiene solucion");
	}
	
}
