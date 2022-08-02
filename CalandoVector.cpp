#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,tam,n1;
    printf("De que tamaño quieres el vector?:");
    scanf("%d",&tam);
    int vec[tam];
    
    for(i=0;i<tam;i++){
    printf("introduce el numero %d:",i+1);
    scanf("%d",&n1);
    vec[i]=n1;
    printf("\n");
    }
	
	for(i=0;i<tam;i++){
		printf("%d",vec[i]);
	}
	
    return 0;
}

