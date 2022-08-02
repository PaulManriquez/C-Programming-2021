//Programa que pide 10 calificaciones de alumnos y te da el promedio
#include<stdio.h>
main()
{
	float cal,cont,promedio,total;
	cont=0;
	
	while(cont<=9)
	{
		printf("Dame la calificacion %.0f:",cont+1);
		scanf("%f",&cal);
	//	printf("\n");
		total=total+cal;
		cont=cont+1;
	}
	promedio=total/10;
	printf("\n");
	printf("El promedio es: %.3f",promedio);
	return 0;
}
