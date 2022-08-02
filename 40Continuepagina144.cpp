//Instruccion continue
#include<stdio.h>
int main ()
{
	int x=1;
	
	for(x=1;x<=10;x++)
	{
		if(x==4)
		{
			continue;
		}
			
		printf("%d\n",x);	
	
	}
	
	return 0; 
}
