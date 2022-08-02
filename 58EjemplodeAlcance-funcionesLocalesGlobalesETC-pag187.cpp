//Ejemplo de alcance 
#include<stdio.h>

void usoLocal(void);        //Prototipo de funcion
void usoStaticLocal(void);  //Prototipo de funcion
void usoGlobal(void);       //Prototipo de funcion

int x=1; //Variable global

//La ejecucion main comienza la ejecucion del programa

int main()
{
	int x=5; //Variable local en main 
	
	printf("La x local fuera del alcance de main es %d\n",x);

	{//Comienza el nuevo alcance 
		int x=7; //Variable local con nuevo alcance
		printf("La x local en el alcance interno de main es %d\n",x);
	}//Fin de nuevo alcance
	
	printf("la x local en el alcance exerno de main es %d\n",x);
	
	usoLocal();         //usoLocal contiene una x local
	usoStaticLocal();   //usoStaticLocal contiene una x local estatica
	usoGlobal();        //usoGlobal utiliza una x global
	usoLocal();         //usoLocal reinicializa la x local automatica
	usoStaticLocal();   //static local x retiene su valor previo
	usoGlobal();        //x global tambien retiene su valor
	
	printf("\nx local en main es %d\n",x);
	return 0;

}

//usLocal reinicializa a la variable local x durante cada llamada
void usoLocal(void)
{
	int x=25; //se inicializa cada vez que se llama usoLocal
	printf("\nla x local en usoLocal es %d despues de entrar a usoLocal\n",x);
	x++;
	printf("La x local en usoLocal es %d antes de salir de usoLocal\n",x);
}

//usoStaticLocal inicializa la variable static local x solo la primera vez que 
//se invoca a la funcion; el valo de x se guarda entre las llamadas a esta funcion
void usoStaticLocal(void)
{
	//Se inicializa solo la primera vez que se invoca a usoStaticLocal
	static int x=50;
	printf("\nla x local estatica es %d al entrar a usoStaticLocal\n",x);
	x++;
	printf("La x local estatica es %d al salir de usoStaticLocal\n",x);
}

//La funcion usoGlobal modifica la variable global x durante cada llamada
void usoGlobal(void)
{
	printf("\nla x global es %d al entrar a usoGlobal\n",x);
	x*=10;
	printf("la x global es %d al salir de usoGlobal\n",x);
}








