#include<stdio.h>
#define TAMANIO 5
#define TAMANIODOS 7
int main(){
	
	int i,j,cont;
	cont=TAMANIO;
	for(i=0;i<TAMANIO;i++){
		for(j=0;j<cont;j++){
			printf("#");
		}
		putchar('\n');
		cont=cont-1;	
	}
	putchar('\n');	
	for(i=0;i<TAMANIO;i++){
		for(j=0;j<(TAMANIO-i);j++){
			printf("#");
		}
		putchar('\n');	
	}
	
	putchar('\n');
	
	int base=TAMANIODOS/2;
	int k,ii,jj;
	k=base;
	for(i=0;i<TAMANIODOS;i++){
		for(j=0;j<((base+1)-k);j++){
			printf("*");
		}
		putchar('\n');
		k--;
		if(i==(base)){
			for(ii=0;ii<base;i++){
				for(jj=base;jj>=1;jj--){
					printf("*");
				}
				putchar('\n');
				jj++;
			}
			break;
		}
	}
	return 0;
	
}
