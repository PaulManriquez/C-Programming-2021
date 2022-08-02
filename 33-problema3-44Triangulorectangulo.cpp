//Problema 3.44 triangulo recto
#include<stdio.h>
int main ()
{
	float n1,n2,n3;
	
	printf("Introduce el lado 1:");
	scanf("%f",&n1);
	printf("\nIntroduce el lado 2:");
	scanf("%f",&n2);
	printf("\nIntroduce el lado 3:");
	scanf("%f",&n3);
	
	if( ((n1*n1)==((n2*n2)+(n3*n3)) ) || ((n2*n2)==((n3*n3)+(n1*n1)) ) || ( (n3*n3)==((n2*n2)+(n1*n1)) ) )
	{
		printf("Triangulo rectangulo");
		
		if(n1>n2 && n1>n3)
		{
			printf("\nLa hipotenusa es n1:%.3f",n1);
		}
		
		
		if(n2>n1 && n2>n3)
		{
			printf("\nLa hipotenusa es n2:%.3f",n2);
		}
		
		
		if(n3>n2 && n3>n1)
		{
			printf("\nLa hipotenusa es n3:%.3f",n3);
		}
		
	}
	printf("\nNo cumplen los catetos: %.3f  %.3f  %.3f",n1,n2,n3);
	
	return 0;
}
