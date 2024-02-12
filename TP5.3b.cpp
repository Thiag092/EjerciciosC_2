#include <stdio.h>
void ingresarMedidas();
float mostrarResultados(float, float, float);

float medida1, medida2, medida3;

int main (){
	ingresarMedidas();
	mostrarResultados(medida1, medida2, medida3);

	return 0;
}
void ingresarMedidas(){
	printf ("\nIngrese longitud de la primer barra: \n");
	fflush(stdin);
	scanf ("%f", &medida1);
	
	printf ("\nIngrese longitud de la segunda barra: \n");
	fflush(stdin);
	scanf ("%f", &medida2);
	
	printf ("\nIngrese longitud de la tercer barra: \n");
	fflush(stdin);
	scanf ("%f", &medida3);
}
float mostrarResultados (float pmedida1, float pmedida2, float pmedida3){
	if (pmedida1 < (pmedida2 + pmedida3) && pmedida2 < (pmedida1 + pmedida3) && pmedida3 < (pmedida2 + pmedida1)){
		printf ("\nLas varillas seleccionadas son aptas para formar un triangulo\n");
	} else { printf ("\nLas varillas seleccionadas no pueden formar un triangulo\n");
		}
}
