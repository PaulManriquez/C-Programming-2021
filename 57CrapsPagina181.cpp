//Juego Graps pag 181
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Constantes de enumeracion que representan el estado del juego (0 1 2...)

enum Estatus { CONTINUA, GANA, PIERDE};
int tiraDados( void ); //prototipo de la funcion
//La funcion main comienza la ejecucion del programa

int main ()
{	
	int suma; //Guarda el retorno de la funcion tiraDados en la variable suma
	int miPunto; //Guarda el punto el cual debe igualarsepara ganar, si toca un 7 pierdes
	
	enum Estatus estatusJuego; //Puede contener CONTINUA,GANA o PIERDE ( 0,1 o 2 )
	
	//Randomiza el generador de numeros aleatorios mediante la funcion time 
	srand(time(NULL)); //<-----Mandamos la funcion time el cual genera un numero aleatorio desde el tiempo de nuestra computadora
	suma= tiraDados();
	//Determina el estado del juego basado en la suma de los dados // recuerda que este switch es para el primer tiro
	//ya que vamos escalando poco a poco 
	switch(suma){
		//Gana en el primer tiro
		case 7:
		case 11:
		estatusJuego = GANA; // = 1 
		printf("¡Ganaste en el primer tiro!");
		break;
		//Pierde en el primer tiro 
		case 2:
		case 3:
		case 12:
		estatusJuego= PIERDE;
		printf("Perdiste en el primer tiro :(");
		break;
		//Si no , recuerda los numero posibles con los que se hace PUNTO y para ganar se tiene que igualar, no tocandote un 7 	
		default:
		estatusJuego= CONTINUA;
		miPunto=suma; //Guardamos nuestro punto en "miPunto" para compararlo posteriormente
		printf("Su punto es %d\n",miPunto);
		break;	
	}
	//Mientras el juego no se complete (Por que esntró en default)
	while(estatusJuego==CONTINUA){
		suma = tiraDados(); //Vuelve a llamar a la funcion que tira los dados
		//Comparamos si gano el jugador	
		if(suma==miPunto){
			estatusJuego= GANA;
			printf("¡Has ganado!");
		}
		else{ //Si es 7 pierde
			if(suma==7){
				estatusJuego= PIERDE;
				printf("¡Has perdido!");
			}
		}
	}

return 0;	
}

int tiraDados( void )
{
	//Dados 
	int dado1;
	int dado2;
	int sumaTemp; //Suma de los dados
	
	dado1= 1 + (rand()%6); //Tomamos los aleatorios
	dado2= 1 + (rand()%6);
	sumaTemp = dado1 + dado2;
	//Despliega los resultados de este tiro
	printf("El jugador tiro %d + %d = %d\n",dado1,dado2,sumaTemp);
	return sumaTemp; //Devuelve la suma de los dados

}
