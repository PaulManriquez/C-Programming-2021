//Ciclo while Determina la primera potencia de 2 que sea mayor que 1000
#include<stdio.h>
main()
{
	int producto;
	
	producto=2;
	
	while(producto<=1000)
	{producto=2*producto;}
	
	printf("El valor es:%d",producto);
	
	return 0;
}
