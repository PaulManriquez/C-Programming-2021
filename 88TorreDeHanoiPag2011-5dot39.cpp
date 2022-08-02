//Torres de hanoi
#include<stdio.h>
#include<math.h>

void hanoi(int disco, int torre1, int torre2,int torre3);
void contador(int Cont);
int main(){
	
	int Torre1=1,Torre2=2,Torre3=3,Disco=0;
	printf("¿Con cuantos discos quieres jugar?");
	scanf("%d",&Disco);
	hanoi(Disco,Torre1,Torre2,Torre3);
	return 0;
}

void hanoi(int disco,int torre1,int torre2,int torre3){
	
	if(disco==1){
		printf("\nMover disco de la torre %d hacia la torre %d",torre1,torre3);
		contador(1);
	}
	else{
	hanoi(disco-1, torre1,torre3,torre2);
	printf("\nMover disco de la torre %d hacia la torre %d",torre1,torre3);
	hanoi(disco-1,torre2,torre1,torre3);	
	contador(1);
	}
	contador(NULL);
	
}
void contador(int Cont){
	int a=0;
	a=a+Cont;
}
