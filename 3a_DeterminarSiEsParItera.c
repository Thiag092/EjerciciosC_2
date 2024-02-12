/*	Una frutería necesita dividir en dos partes iguales el contenido de un cajón de naranjas. Para 
	ello necesita saber si la cantidad de naranjas es un número par. Escriba una función que reciba 
	el número como parámetro y muestre la leyenda "Es par" si el número es exactamente divisible por dos. 
	El programa debe permitir el ingreso de la cantidad de naranjas por teclado e invocará a la función. */

#include <stdio.h>

void ingresarCantidadNaranjas();
void mostrarLeyendaSiEsPar(int);

int cantNarajas; 
char hayMas;

int main() {
	ingresarCantidadNaranjas();
	while(hayMas == 's'){
		mostrarLeyendaSiEsPar(cantNarajas);
		ingresarCantidadNaranjas();
	}
	return 0;
}

void ingresarCantidadNaranjas() {
	printf("Hay mas cajones ? (s/n)): ");
	fflush(stdin);
	scanf("%c", &hayMas);
	if(hayMas == 's'){
		printf("Ingresar cantidad de naranjas: ");
		scanf("%d", &cantNarajas);
	}
}

void mostrarLeyendaSiEsPar(int p_Numero) {
		if ((p_Numero % 2) == 0) {
			printf("\n\tEs par\n");
		}
}
