#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaImporte(float horas);

int main()
{
float horas=0;
float importe=0;
float totalHoras=0;
float totalImporte=0;
int c=1;

printf("Ingrese horas de estacionamiento de cada automovil (0 para terminar): ");
scanf("%f",&horas);
printf("Automovil Horas Importe\n");

while(horas!=0){
importe=calculaImporte(horas);
printf("%-9d %10.1f %11.2f\n",c,horas,importe);
//printf("%d %.1f %.2f\n",c,horas,importe);
totalHoras+=horas;
totalImporte+=importe;
c++;
scanf("%f",&horas);
}

printf("Total%15.1f %10.2f\n",totalHoras,totalImporte);

return 0;
}

float calculaImporte(float horas)
{
float costo=0;

if(horas<=3) costo=2;
if(horas>3 && horas<19) costo=2+0.5*(ceil(horas)-3);
if(horas>=19) costo=10;

return costo;
}
