#include<stdio.h>
int multiplo(int M1, int De);
int main (){
	int m1,de,a;
	do{
	
	printf("Introduce m1:");
	scanf("%d",&m1);
	printf("Introduce de:");
	scanf("%d",&de);
	//printf("%d",multiplo(m1,de));
	multiplo(m1,de);
printf("\nDesea continuar?(1)");
scanf("%d",&a);
printf("\n");
}while(a==1);
	return 0;
}
int multiplo(int M1, int De){
	if(M1%De==0){
		printf("%d es multiplo de %d",De,M1);
	}
	else if(De%M1==0){
		printf("%d es multiplo de %d",M1,De);
	}
	else{
		printf("%d y %d no son multiplos",M1,De);
	}
}
