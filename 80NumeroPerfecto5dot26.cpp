//Numeros perfectos
#include<stdio.h>
#include<math.h>
int main(){
	
	int i,j,perfecto=0;
	int div,comp;
	
	for(i=1;i<=500;i++){
		
		for(j=1;j<i;j++){
			div=i/j;
			comp=div*j;
			if(comp==i){
				perfecto=perfecto+j;		
			}		
			}
			if(perfecto==i){
				printf("%d\n",perfecto);
			}
			perfecto=0;
	}	
	return 0;
}
