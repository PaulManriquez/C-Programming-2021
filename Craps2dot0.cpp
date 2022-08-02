#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Estatus {CONTINUA,GANA,PIERDE};
int tiraDados(void);
int main()
{
    int suma;
    int miPunto;
    enum Estatus estatusJuego;
    srand(time(NULL));
    suma=tiraDados(void);
    /*Determina el estado del juego basado en la suma de dados*/
    switch(suma){
    case 7:
    case 11:
        estatusJuego=GANA;
    break;
    case 2:
    case 3:
    case 12:
        estatusJuego=PIERDE;
        break;
    default:
    estatusJuego=CONTINUA;
    miPunto=suma;
    printf("Su punto es:%d",miPunto);
    break;
    }

    while(estatusJuego==CONTINUA){
        suma=tiraDados(void);
        if(suma==miPunto){
            estatusJuego=GANA;
        }
        else if(suma==7){
            estatusJuego=PIERDE;
        }
    }
    if(estatusJuego==GANA){
        printf("El jugador gana\n");
    }
    else{
        printf("El jugador pierde\n");
    }
    return 0;
}
int tiraDados(void)
{
int dado1;
int dado2;
int sumaT;
dado1=1+(rand()%6);//Dado 1
dado2=1+(rand()%6);
sumaT=dado1+dado2;
printf("El jugador tiro %d + %d = %d \n",dado1,dado2,sumaT);
return sumaT;
}

