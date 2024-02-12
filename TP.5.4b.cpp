#include <stdio.h>
#include <stdbool.h>

void ingresarDatos();
int calcularAutorizacion(int,int);
/*void mostrarResultado();*/

int dni, dia;

int main (){
	ingresarDatos();
 	calcularAutorizacion(dni,dia);
/*	mostrarResultado();*/
	
	return 0;
}
void ingresarDatos(){
	printf ("Ingrese ultimos 3 numeros del DNI\n");
	fflush (stdin);
	scanf ("%d", &dni);
	
	printf ("Ingrese dia de la semana\n");
	fflush (stdin);
	scanf ("%d", &dia);
}
void calcularAutorizacion(int pDni,int pDia){
	
	
	if ( (pDni % 2 == 0) && (pDia == 1 || pDia == 3 || pDia== 5) ){
		 printf ("\nAutorizado");
	}else { printf("\nNo autorizado");
	}
}
/*void imprimirSaldo(){
	if (pIngresos > pGastos){	
	printf ("%.2f", saldo)}
	else {printf ("Columna");
	}
	
}*/
