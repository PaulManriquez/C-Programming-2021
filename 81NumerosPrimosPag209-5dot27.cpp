//Numeros primos
#include<stdio.h>
#include<math.h>
int main (){
	
	int i,j,cont=0;
	for(i=1;i<=100;i++){
		for(j=1;j<=i;j++){
			if(i%j==0){
				cont+=1;
			}
		}
		if(cont==2){
			printf("%d numero primo\n",i);
		}
	cont=0;
	}
	return 0;
}
