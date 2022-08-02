//Valor centinela promedio de calificaciones
#include<stdio.h>
#include<math.h>
main()
{
	int cent,total=0,cont,cal,resta;
	float promedio;
	cont=0;
	cent=2;
	while(cent>1)
	{
	printf("Inserta el numero %d :",cont+1 );	
	scanf("%d",&cal);
	
	if(cal>100 || cal <0)
	{ 
	cent=0;
	resta=(cal % 100);//+1;//por la condicion de cal>100...? // el error Fue por no inicializar TOTAL como 0
//	cal=cal-resta;
	printf("\nEste es tu excedente de tu calificacion o menor a 0:%d\ntermina el programa",resta);
	}
		
	
	total=total+cal-resta;
	cont=cont+1;

	}
	
	printf("\nTotal de calificaciones ingresadas:%d",cont);
	promedio=(float)total/cont;
	
	printf("\nPromedio total:%.3f",promedio);	
	
	return 0;
}
