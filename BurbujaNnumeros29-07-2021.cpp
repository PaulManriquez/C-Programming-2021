//Metodo burbuja por mi el chido
#include<stdio.h>
int main(){
	
	int i,a,j,size,nn;
	
	printf("¿Cuantos numeros desea introducir? : ");
	scanf("%d",&size);
	size=size-1;
	int n[size];
	
	for(i=0;i<=size;i++){
		printf("Introduce el numero %d :",i+1);
		scanf("%d",&nn);
		n[i]=nn;
	}
	
	for(i=0;i<=size;i++){
		for(j=0;j<size;j++){
			if(n[j]>=n[j+1]){
				a=n[j];
				n[j]=n[j+1];
				n[j+1]=a;
			}
		}
	}
	
	for(i=0;i<=size;i++){
		printf("%d ",n[i]);
	}
	
	
	
	
	return 0;
}
