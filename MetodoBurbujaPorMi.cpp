#include<stdio.h>
int main ()
{
	int n[2];
	int i,nn,a,j=0;
	
	for(i=0;i<=2;i++){
		printf("Introduce el numero %d:",i+1);
		scanf("%d",&nn);
		n[i]=nn;
	}
	
//do{
for(i=0;i<=2;i++){
for(j=0;j<2;j++){
		if(n[j]>=n[j+1]){
			a=n[j];
			n[j]=n[j+1];
			n[j+1]=a;
	//	printf("%d %d \n",n[j],n[j+1]);
		}
}
}
//		j++;
//	} while(j<2);
	
	for(i=0;i<=2;i++){
		printf("%d ",n[i]);			
	} 
	
	
	
	return 0;
}
