//Programa 3.21
#include<stdio.h>
int main ()
{
	float S,HL,Hextras,P,Pagoe,Tpagoe;
	
	printf("Introduzca el numero de horas laboradas (-1 para terminar):");
	scanf("%f",&HL);
	while(HL!=-1)
	{
		printf("Introduzca el pago por hora del empleado:");
		scanf("%f",&P);
		
		if(HL>40)
		{
			Hextras=HL-40;
			S=40*P;
			Pagoe=((P/2)+P)*Hextras;
			Tpagoe=S+Pagoe;
			printf("El salario es:$%.3f",Tpagoe);
		}
		else 
		{
			S=HL*P;
			printf("El salario es:$%.3f",S);
		}
	
	printf("\n\nIntroduzca el numero de horas laboradas (-1 para terminar):");
	scanf("%f",&HL);
		
	}
	
	return 0;
}
