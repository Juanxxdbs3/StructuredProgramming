/* Escriba un programa en C++ que lea un numero e imprima el cuadrado y el cubo de tal numero.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	float n,ncuad,ncub;
	
	printf("Por favor, ingrese un numero: "); scanf("%f", &n);
	
	ncuad= pow(n,2);
	ncub= pow(n,3);
	
	printf("\nEl cuadrado del numero es: %.2f",ncuad);
	printf("\nEl cubo del numero es: %.2f", ncub);
	
	
	return 0;
	
}
