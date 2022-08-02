//Conjutos 2,4,6,8,10 pag 208 - 5.14 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
	
	int n[5];
	int p1,p2;
	srand(time(NULL));
	int i=0;
	do{
		
		p1=2+(rand()%8);
		if(p1%2==0){
			n[i]=p1;
			printf("%d",p1);
			i+=1;
		}
	}while(i<=4);
	printf("\n");
	int k,f;
	int cont=0;
	do{
		for(i=0;i<=3;i++){
			for(k=1;k<=4;k++){
				if(n[i]==n[k]){
					do{
						p2=2+(rand()%8);
						if(p2%2==0 && p2!=n[i] )
						{	//printf("--%d",p2);
							n[i]=p2;
							cont=1;
						}
					}while(cont==0);
				}
			}
		}
		f+=1;
	}while(f<=100);
	
	for(i=0;i<=4;i++){
		printf("%d",n[i]);
	}
	
	
	return 0;
}
