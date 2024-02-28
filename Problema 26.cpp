/*En la ciudad de Cartagena hay N habitantes el 1 de enero. Al finalizar el a�o (el 31 de
diciembre) la poblaci�n ha variado por las siguientes causas:

        El 2% de la poblaci�n ha emigrado a otras ciudades o municipios.
        Hubo un aumento del 1,8% por inmigraciones.
		Hubo un aumento del 1,7% por nacimientos.
		El 1,1% de la poblaci�n falleci�.

Elabore un programa en C++ que bas�ndose en la anterior informaci�n calcule e imprima lo
siguiente.

		Aumento promedio mensual de la poblaci�n (en n�mero de personas).
		Disminuci�n promedio mensual de la poblaci�n (en n�mero de personas).
		Poblaci�n total de la ciudad al finalizar el a�o.*/

#include<iostream>
#include<locale.h>
#include<stdlib.h>

using namespace std;

int main()
{	
	setlocale(LC_ALL, "spanish");

	long hab, hab_final, dism, aum, promaum, promdim;

	printf("\t---->>>C�lculo de habitantes en cartacho<<<----");
	printf("\n Ingrese el n�mero de habitantes en cartagena al iniciar el a�o: "); scanf("%d", &hab);
	
	aum= ((hab*0.018) + (hab*0.017));
	dism= ((hab*0.02)+(hab*0.011));		
	hab_final= hab + aum - dism;
	promaum = aum/12;
	promdim = dism/12;
	
	system("CLS");
	
	printf("\nEl promedio mensual de aumento de la poblaci�n es de: %d", promaum);
	printf("\nEL promedio mensual de disminuci�n de la ploblaci�n es de: %d ", promdim);
	printf("\nEl numero de habitantes el 31 de diciembre ser� de: %d", hab_final);
	printf("\n");
	
	
	system("PAUSE");
	return 0;
}
