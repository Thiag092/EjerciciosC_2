#include <stdio.h>
void ingresarDatos ();
float calcularArea();
void imprimirResultado();

float  radio;
int cantidadCirculos;

int main (){
	ingresarDatos ();
	imprimirResultado();
	
	return 0;
}
void ingresarDatos (){
	
	printf ("\nIngrese la cantidad de circulos a pintar: \n");
	fflush (stdin);
	scanf ("%d", &cantidadCirculos);
	
	printf ("\nIngrese el radio del circulo: \n");
	fflush (stdin);
	scanf ("%f", &radio);
}
float calcularArea(){
	float area, areaTotal;
	area = 3.14 * (radio*radio);
	areaTotal = area * (float)cantidadCirculos;
	
	return areaTotal;
}
void imprimirResultado(){
	
	printf ("\nLa cantidad de circulos a pintar es de: %d\n", cantidadCirculos);
	
	printf ("\n\tLa cantidad de area a cubrir es de: %.2f\n", calcularArea());
	
}
