#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
	
	int par1,par2,inpar1,a;
	
	srand(time(NULL));
	do{
	
	par1=2+(rand()%8);
	
	if(par1%2==0){
		printf("%d",par1);
	}
	else{
		par1+=1;
		printf("%d",par1);
	}
	printf("\nTerminar(0)");
	scanf("%d",&a);
}while(a!=0);
	
	return 0;
}
