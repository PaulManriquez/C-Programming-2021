//Alcance de funcion

#include<stdio.h>

int cubo (int y);

int main(){

int x;

for(x=1;x<=10;x++)
	printf("%d\n",cubo(x));

	return 0;	
} 
int cubo(int y){
	return y*y*y;
}
