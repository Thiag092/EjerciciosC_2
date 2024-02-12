/* a) 	Un local comercial quiere colocar una cinta con una leyenda impresa en una caja rectangular.  
		Para determinar la cantidad de cinta a comprar necesita conocer el perímetro  de la caja. 
		Escriba una función que calcule y devuelva el valor del perímetro, aplicando la fórmula: 
			perímetro = 2 * (lado1 + lado2). 
		El programa debe permitir el ingreso de los datos requeridos: el ancho (lado1) y alto (lado2) de la caja 
		y debe mostrar en pantalla los datos de la caja y la cantidad de metros de cinta a comprar.*/

#include <stdio.h>	

/* Declaración de prototipos */
void ingresarDatosCaja();
void mostrarResultados();
float perimetro();

/* Declaración de variables globales */
float lado1, lado2;

/* Función principal */		
int main() {
	ingresarDatosCaja();
	mostrarResultados();
	return 0;
}

void ingresarDatosCaja() {	
	printf("Ingresar el ancho de la caja: ");
	scanf("%f", &lado1);
	
	printf("Ingresar el alto de la caja: ");
	scanf("%f", &lado2);
}

void mostrarResultados() {
	printf("\n*** Datos de la caja *** \n");
	printf("Ancho: %.2f mtrs\n", lado1);
	printf("Alto: %.2f mtrs\n", lado2);
	printf("\tCantidad de cinta a comprar: %.2f mtrs\n", perimetro());
	
}

float perimetro() {
	return ( 2 * (lado1 + lado2) );
}

