/*Programa para obtener el promedio de calificaciones de un grupo mediante una repeticion
controlada por centinela*/
#include<stdio.h>
int main()
{
	int contador;
	int calificacion;
	int total;
	
	float promedio;
	
	total=0;
	contador=0;
	
	printf("Introduzca la calificacion, -1 para terminar:");
	scanf("%d",&calificacion);
	
	while(calificacion !=-1) //Repite el ciclo mientras no se introduzca el valor -1
	{
		total=total+calificacion;
		contador=contador+1;
		
		printf("Introduzca la calificacion, -1 para terminar:");
	    scanf("%d",&calificacion);
	}
	
	//Si el usuario introdujo almenos una calificacion
	if(contador!=0)
	{
		promedio=(float)total/contador;//Evita que se trunque
		printf("El promedio del grupo es:%.3f\n",promedio);
	}
	else{ //si no se introdujo calificacion alguna despliega el mensaje
	printf("No se introdujeron calificaciones\n");
	}
return 0;
}
