#include<stdio.h>
#include<string.h>
//#include<conio.h>
int main ()
{
	int ii;
	for(ii=1;ii<=256;ii++)
	{
	
	int b,a=0,nn,contn=0,contc=0,amod=0,contg=0;
	
	nn=ii;
	b=nn;
		do{
	
	a=nn/16;
	amod=nn%16;
	nn=a;	
/*	if(amod<=9 && amod >=0)
	{contn++;}
	
	if(amod>=10 && amod<=15)
	{contc++;}
*/	contc++;
	contg++;
	}while(nn!=0);
	contg=contg-1;
	//printf("%d \n",contg);
	//contn=contn-1;
	//para contc no cambia por el valor null /0
	
	int Hexadecimal[contg];
	int Div=0,Mod=0,i,j;
	
	for(i=contg;i>=0;i--)
	{
		//fflush(stdin);
		Div=b/16;
		Mod=b%16;
		b=Div;
		Hexadecimal[i]=Mod;
		//printf("%d\n",Mod);
	}
	
	
	for(j=0;j<=contg;j++)
	{ 
		if(Hexadecimal[j] == 0 ) 
			printf("0");
		if(Hexadecimal[j] == 1 ) 
			printf("1");
		if(Hexadecimal[j] == 2 ) 
			printf("2");
		if(Hexadecimal[j] == 3 ) 
			printf("3");
		if(Hexadecimal[j] == 4 ) 
			printf("4");
		if(Hexadecimal[j] == 5 ) 
			printf("5");
		if(Hexadecimal[j] == 6 ) 
			printf("6");
		if(Hexadecimal[j] == 7 ) 
			printf("7");
		if(Hexadecimal[j] == 8 ) 
			printf("8");
		if(Hexadecimal[j] == 9 ) 
			printf("9");
		if(Hexadecimal[j] == 10 ) 
			printf("A");
		if(Hexadecimal[j] == 11 ) 
			printf("B");
		if(Hexadecimal[j] == 12 ) 
			printf("C");
		if(Hexadecimal[j] == 13 ) 
			printf("D");
		if(Hexadecimal[j] == 14 ) 
			printf("E");	
		if(Hexadecimal[j] == 15 ) 
			printf("F");													
	}
	printf("\n");
}
	return 0;
}
