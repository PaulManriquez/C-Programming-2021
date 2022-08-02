//Funcion el mayor de 3 numeros
#include<stdio.h>

int maximode3(int n1, int n2, int n3);//protoripo de la funcion

int main ()
{
	int x,y,z;
	printf("Introduzca 3 numeros: ");
	scanf("%d%d%d",&x,&y,&z);
	//x y and  z son ARGUMENTOS para la llama a la funcion "maximo de 3"
	printf("El maximo es:%d",maximode3(x,y,z));
return 0;	
}

//Definiciondela funcion maximode3
//n1,n2,n3 son parametros

int maximode3(int n1, int n2, int n3)
{
	int max=n1;
	
	if(n2>max)
	{ max=n2; }
	
	if(n3>max)
	{ max=n3; }

	return max; //devuelve el valor mas grande
}
