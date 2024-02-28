/*En la ciudad de Cartagena hay N habitantes el 1 de enero. Al finalizar el año (el 31 de
diciembre) la población ha variado por las siguientes causas:

        El 2% de la población ha emigrado a otras ciudades o municipios.
        Hubo un aumento del 1,8% por inmigraciones.
		Hubo un aumento del 1,7% por nacimientos.
		El 1,1% de la población falleció.

Elabore un programa en C++ que basándose en la anterior información calcule e imprima lo
siguiente.

		Aumento promedio mensual de la población (en número de personas).
		Disminución promedio mensual de la población (en número de personas).
		Población total de la ciudad al finalizar el año.*/

#include<iostream>
#include<locale.h>
#include<stdlib.h>

using namespace std;

int main()
{	
	setlocale(LC_ALL, "spanish");

	long hab, hab_final, dism, aum, promaum, promdim;

	printf("\t---->>>Cálculo de habitantes en cartacho<<<----");
	printf("\n Ingrese el número de habitantes en cartagena al iniciar el año: "); scanf("%d", &hab);
	
	aum= ((hab*0.018) + (hab*0.017));
	dism= ((hab*0.02)+(hab*0.011));		
	hab_final= hab + aum - dism;
	promaum = aum/12;
	promdim = dism/12;
	
	system("CLS");
	
	printf("\nEl promedio mensual de aumento de la población es de: %d", promaum);
	printf("\nEL promedio mensual de disminución de la ploblación es de: %d ", promdim);
	printf("\nEl numero de habitantes el 31 de diciembre será de: %d", hab_final);
	printf("\n");
	
	
	system("PAUSE");
	return 0;
}
