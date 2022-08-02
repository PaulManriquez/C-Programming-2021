/*Nuevas condicionales */
#include<stdio.h>
main ()
{
	int cal;
	
	printf("Dame la calificacion:");
	scanf("%d",&cal);
	
	cal>=60 ? printf("Aprobado\n"):printf("Reprobado\n");
	
	printf("\n");
	
	printf("%s \n ",cal>=60?"Aprobado":"Reprobado");
	
	return 0;
}
