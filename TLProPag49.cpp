#include<stdio.h>
#define TAMANIODOS 22
int main(){
	int base=TAMANIODOS/2;
	int i,j,k,ii,jj;
	k=base;
	for(i=0;i<TAMANIODOS;i++){
		for(j=0;j<((base+1)-k);j++){
			printf("*");
		}
		putchar('\n');
		k--;
		if(i==(base)){
			break;
		}
	}
	int cont=0;
	for(ii=0;ii<base;ii++){
		for(jj=cont;jj<base;jj++){
				printf("*");
				}
		putchar('\n');
		cont++;
			}
	return 0;
}
