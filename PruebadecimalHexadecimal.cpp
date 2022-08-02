#include<stdio.h>
#include<string.h>
//#include<conio.h>
int main ()
{
	
	int b,a=0,nn=699,contn=0,contc=0,amod=0,contg=0;
	
	//nn=ii;
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
	//printf("%d %d",contn,contc);
	//contn=contn-1;
	//para contc no cambia por el valor null /0
	
	char Hexadecimal[contc];
	int Div=0,Mod=0,i,j;
	
	for(i=contg;i>=0;i++)
	{
		fflush(stdin);
		Div=b/16;
		Mod=b%16;
		b=Mod;
		switch(Div)
		{
			case 1:  Hexadecimal[i]='1'; break;
			case 2:  Hexadecimal[i]='2'; break;
			case 3:  Hexadecimal[i]='3'; break;
			case 4:  Hexadecimal[i]='4'; break;
			case 5:  Hexadecimal[i]='5'; break;
			case 6:  Hexadecimal[i]='6'; break;
			case 7:  Hexadecimal[i]='7'; break;
			case 8:  Hexadecimal[i]='8'; break;
			case 9:  Hexadecimal[i]='9'; break;
			case 10: Hexadecimal[i]='A'; break;
			case 11: Hexadecimal[i]='B'; break;
			case 12: Hexadecimal[i]='C'; break;
			case 13: Hexadecimal[i]='D'; break;
			case 14: Hexadecimal[i]='E'; break;
			case 15: Hexadecimal[i]='F'; break;
		
		}
		
	}
	
	for(j=0;j<=contg;j++)
	{printf("%s",Hexadecimal[j]); }
	
	return 0;
}
