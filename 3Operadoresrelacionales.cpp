/* Operadores comparacionales */
#include<stdio.h>
main()
{	int n1,n2;

	printf("Introduce el primer numero: ");
	scanf("%d",&n1);
	printf("\n");	
	
	printf("Introduce el segundo numero: ");
	scanf("%d",&n2);
	printf("\n");
	
	if(n1==n2)
	{ printf("Numeros iguales");
	  printf("\n");
	    }
	
	if(n1!=n2)
	{ printf("Numeros diferentes"); 
	  printf("\n");
	   }

	if(n1>n2)
	{ printf("Numero 1 es mayor a numero 2");
	  printf("\n");
	    }
	
	if(n1<n2)
	{ printf("Numero 1 es menor a numero 2");
	  printf("\n");
	    }
	
	if(n1>=n2)
	{ printf("Numero 1 es mayor o igual a numero 2");   
	  printf("\n");
	 }
	
	if(n1<=n2)
	{ printf("Numero 1 es menor o igual a numero 2");   
	  printf("\n");
	 }
	
	return 0;
}
