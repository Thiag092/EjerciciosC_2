#include <stdio.h>
void ingresarDatos();
void calcularParidad(int);
void imprimirResultados();

int cantNaranjas;

int main (){
	ingresarDatos();
	calcularParidad(cantNaranjas);
	imprimirResultados();
	
	return 0;
}
void ingresarDatos(){
	printf ("\nIngrese cantidad de naranjas en el cajon: \n");
	scanf ("%d", &cantNaranjas);
}
void calcularParidad(int pCantidad){
	pCantidad = pCantidad %2;
}
void imprimirResultados(){
	if (cantNaranjas % 2 == 0){
		printf ("%d es un numero par", cantNaranjas);
	} else {printf ("%d es un numero impar", cantNaranjas);
	}
	
	
}
