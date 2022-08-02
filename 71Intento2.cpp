//Conjutos 2,4,6,8,10 pag 208 - 5.14 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
	
	int n[5];
	int p1,p2;
	srand(time(NULL));
	int i=0,j,a,k;
/*	do{
		
		p1=2+(rand()%8);
		if(p1%2==0){
			n[i]=p1;
			printf("%d",p1);
			i+=1;
		}
	}while(i<=4);

	printf("\n");
*/
do{
	p1=2+(rand()%8);
	if(p1%2==0){
		if(i==0){n[i]=p1;}
		n[i]=p1;
		for(j=0;j<=a;j++){
			if(n[a]==n[j]){
				do{
					p2=2+(rand()%8);
					if(p2%2==0){
						n[a]=p1;
					}
				}while(n[a]==n[j]);
			}
		}
	}
	i+=1;
	a=i;
}while(i<=4);	
	
	for(k=0;k<=4;k++){
		printf("%d",n[k]);
	}
	return 0;
}
