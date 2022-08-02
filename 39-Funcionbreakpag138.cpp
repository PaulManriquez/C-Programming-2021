//Utilizacion del switch
#include<stdio.h>
int main()
{
	int calificacion,M;
	
	int cuentaA = 0;
	int cuentaB = 0;
	int cuentaC = 0;
	int cuentaD = 0;
	int cuentaF = 0;
	
	printf("Inroduzca la letra que corresponte a la calificacion:\n");
	printf("Introduzca el caracter EOF para finalizar la entrada de datos\n");
	
	while( (calificacion=getchar() ) !=EOF)
	{
		switch(calificacion)
		{
			case 'A':
			case 'a':
				++cuentaA;
				break;
			
			case 'B':
			case 'b':
				++cuentaB;
				break;
			
			case 'C':
			case 'c':
				++cuentaC;
				break;
			
			case 'D':
			case 'd':
				++cuentaD;
				break;
			
			case 'F':
			case 'f':
				++cuentaF;
				break;
			
			case '\n':
			case '\t':
			case ' ':
			break;
			
			default: //Atrapa todos los demas caracteres
			printf("Introdujo una letra incorrecta");
			printf("Intduzca una nueva calificacion:\n");
			break;
			
		}
		
		
	}
	
	printf("A: %d\n",cuentaA);
	printf("B: %d\n",cuentaB);
	printf("C: %d\n",cuentaC);
	printf("D: %d\n",cuentaD);
	printf("F: %d\n",cuentaF);
	
	return 0;
}
