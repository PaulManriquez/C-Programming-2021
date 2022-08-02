#include<stdio.h>
#include<math.h>
int main (){
	
	int n,i=1,Tvec=0;
	printf("Introduce el numero:");
	scanf("%d",&n);
	
	do{
		if(n<10){
			printf("\nEl numero es menor a 10");
			i*=10;
			Tvec+=1;
			break;
		}
		if(n>i){
			i*=10;
			Tvec+=1;
		}
		
	}while(i<n);
	
	i=i/10;
	printf("\n I:%d - Tvec:%d",i,Tvec);
	printf("\n");
	int n1[Tvec];
	int a=0;
	int div,mod;
	
	do{
		div=n/i;
		mod=n%i;
		n1[a]=div;
		n=mod;
		i=i/10;
		a+=1;
	}while(a<Tvec);
	
	int j;
	printf("\n");
	for(j=Tvec-1;j>=0;j--){
		printf(" %d ",n1[j]);
	}
	
	return 0;
}
