//Escriba instrucciones que asignen enteros de manera aleatoria a la variable n en los siguientes rangos 
//Programa 5.13 pag 208
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	int a,b,c,d,e,f,continu;
	
	srand(time(NULL));
	
	do{
	
	a=1+(rand()%2);
	printf("a:%d\n",a);
	b=1+(rand()%100);
	printf("b:%d\n",b);
	c=0+(rand()%9);
	printf("c:%d\n",c);
	d=1000+(rand()%1005);// quizas hay un overflow(checar) tambien hasta que rango te genera el rand 
	printf("d:%d\n",d);
	e=-1+(rand()%1);
	printf("e:%d\n",e);
	f=-3+(rand()%11);
	printf("f:%d\n",f);
	
	printf("¿Desea continuar?(0):");
	scanf("%d",&continu);
	}while(continu==0);
	return 0;
}
