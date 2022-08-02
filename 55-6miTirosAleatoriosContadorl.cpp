#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int contn1=0,contn2=0,contn3=0,contn4=0,contn5=0,contn6=0;
	int contGT=0;
	int cara;
	//Repetir 6mil veces y resume los resultados
	
	for(contGT=1;contGT<=6000;contGT++)
	{
		cara= 1 + rand() % 6;
		
		switch(cara)
		{
			case 1: 
					contn1++;
					break;
			case 2: 
					contn2++;
					break;
			case 3: 
					contn3++;
					break;
			case 4: 
					contn4++;
					break;
			case 5: 
					contn5++;
					break;
			case 6: 
					contn6++;
					break;										
		}	
	}
	
	printf("%s%13s\n","Cara","Frecuencia");
	printf("   1%13d\n",contn1);
	printf("   2%13d\n",contn2);
	printf("   3%13d\n",contn3);
	printf("   4%13d\n",contn4);
	printf("   5%13d\n",contn5);
	printf("   6%13d\n",contn6);
	
	return 0;
}
