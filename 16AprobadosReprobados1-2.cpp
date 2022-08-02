//Programa que determina cuantos alumnos aprobaron (1) y no aprobaron (2) y dice si se cumplió el objetivo
#include<stdio.h>
int main ()
{
	int Alumnos=1;
	int Aprobados=0;
	int Reprobados=0;
	int n1;
	
	while(Alumnos<=10)
	{
		printf("Introduce (1) aprobaron \tIntroduce(2) reprobaron:");
		scanf("%d",&n1);
		
		if(n1==1)
		{
			Aprobados=Aprobados+1;
			Alumnos=Alumnos+1;
		}
		if(n1>1)
		{
			Reprobados=Reprobados+1;
			Alumnos=Alumnos+1;
		}
		
		
	}
	if(Aprobados>=8)
	{
		printf("¡Se cumplio el objetivo!");
	}
	else
	{
		printf("¡No se cumplio el objetivo!");
	}
	printf("\nNumeros aprobados:%d",Aprobados);
	printf("\nNumeros reprobados:%d",Reprobados);
	return 0;
}
