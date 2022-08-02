//3.18 pagina 119
#include<stdio.h>
int main ()
{
	int NC;
	float SI,Tcargos,Tcreditos,Lcreditos;
	float NS=0;
	
	printf("Introduzca el numero de cuenta (-1 para terminar):");
	scanf("%d",&NC);	
	while(NC!=-1)
	{
	
	printf("Introduzca el saldo inicial:");
	scanf("%f",&SI);
	
	printf("Introduzca el total de cargos:");
	scanf("%f",&Tcargos);
	
	printf("Introduzca el total de creditos:");
	scanf("%f",&Tcreditos);
	
	printf("Introduzca el limite de creditos:");
	scanf("%f",&Lcreditos);
	////////////////////
	
	printf("\nCuenta:%d",NC);
	printf("\nLimite de credito:%f",Lcreditos);
	
	NS=(SI+Tcargos)-Tcreditos;
	
	printf("\nSaldo:%f",NS);
	////////////////////
	if(NS>Lcreditos)
	{
	printf("\nLimite excedito");
	printf("\n");
	}
	else
	{
	printf("\nAceptado");
	printf("\n");
	}
	printf("\nIntroduzca el numero de cuenta (-1 para terminar):");
	scanf("%d",&NC);
	}
	
	
	return 0;
}
