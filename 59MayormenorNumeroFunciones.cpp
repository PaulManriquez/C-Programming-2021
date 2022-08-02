#include<stdio.h>
int main()
{
	int i,n[2],a=0,b,c,j,nn;
	
	for(i=0;i<=2;i++)
	{
		printf("Ingresa el numero %d:",i+1);
		scanf("%d",&nn);
		n[i]=nn;
		
	}
	
	for(j=0;j<2;j++){
	
	a=n[j];
	if(a>=n[j+1]){
	b=n[j+1];
	n[j]=b;
	}	
				}
	
	for(i=0;i<=2;i++){
		printf("%d ",n[i]);
	}			
		
	return 0;
}
