//Suma resta multiplicacion division con funciones
#include<stdio.h>
#include<math.h>

float suma(float n1,float n2);
float resta(float n1,float n2);
float multiplicacion(float n1,float n2);
float division(float n1,float n2);
int main (){
	
	int a,b;
	float x1,x2;
	do{
	
	printf("Ingresa \n 1 para suma \n 2 para resta \n 3 para multiplicacion \n 4 para division\n");
	scanf("%d",&a);
	printf("Ingresa los 2 numeros:");
	scanf("%f %f",&x1,&x2);
	
	switch(a){
		case 1:
			suma(x1,x2);
			break;
		case 2:
			resta(x1,x2);
			break;		
		case 3:
			multiplicacion(x1,x2);
			break;
		case 4:
			division(x1,x2);
			break;
		default: puts("Error");	
	}
	printf("\n¿Desea ingresar otra funcion?: (1) Si  (2) No");
	scanf("%d",&b);
}while(b==1);
	return 0;
}

float suma(float n1,float n2){

float sumaa;
sumaa= n1+n2;
printf("La suma es:%.3f",sumaa);	

}

float resta(float n1,float n2){

float restaa;
restaa= n1-n2;
printf("La resta es:%.3f",restaa);	

}


float multiplicacion(float n1,float n2){

float multiplicacionn;
multiplicacionn= n1*n2;
printf("La multiplicacion es:%.3f",multiplicacionn);	

}


float division(float n1,float n2){

float divisionn;
divisionn= n1/n2;
printf("La division es:%.3f",divisionn);	

}
