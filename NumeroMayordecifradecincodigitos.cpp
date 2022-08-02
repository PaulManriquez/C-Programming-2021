/*Programa 5 cifras las divide y te da el mayor de los 5 numeros */
#include<stdio.h>
main()
{
	int n1,A,B,C,D,E,AA,BB,CC,DD;
	printf("Dame la cifra:");
	scanf("%d",&n1);
	
	A=n1/10000; /*primer digito*/
	AA=	n1%10000;
	
	B=AA/1000; /*Segundo digito*/
	BB=AA%1000;
	
	C=BB/100; /*Tercer digito*/
	CC=BB%100;
	
	D=CC/10; /*Cuarto digito*/
	DD=CC%10;	
	
	E=DD/1; /*Quinto dijito*/
	
	printf("%d %d %d %d %d",A,B,C,D,E);
	printf("\n");
	
	if(A>B && A>C && A>D && A>E)
	{printf("Mayor digito:%d",A);}
	
	if(B>A && B>C && B>D && B>E)
	{printf("Mayor digito:%d",B);}
	
	if(C>B && C>A && C>D && C>E)
	{printf("Mayor digito:%d",C);}
	
	if(D>B && D>C && D>A && D>E)
	{printf("Mayor digito:%d",D);}
	
	if(E>B && E>C && E>D && E>A)
	{printf("Mayor digito:%d",E);}
	
	
	
	
	
	
	return 0; 
}
