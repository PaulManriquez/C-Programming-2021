#include<stdio.h>
int main(){
	
	register char x= 's';
	register int a=10;	
	auto int b = 8;
   
   	printf("El valor de registro en la variable x es:%c\n ",x);
	printf("La suma de register and auto es:%d\n",(a+b));
	printf("Valor de a:%d",a);

	return 0; 
}
