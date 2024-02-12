/*	Una fruter�a necesita dividir en dos partes iguales el contenido de un caj�n de naranjas. Para 
	ello necesita saber si la cantidad de naranjas es un n�mero par. Escriba una funci�n que reciba 
	el n�mero como par�metro y muestre la leyenda "Es par" si el n�mero es exactamente divisible por dos. 
	El programa debe permitir el ingreso de la cantidad de naranjas por teclado e invocar� a la funci�n. */

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
