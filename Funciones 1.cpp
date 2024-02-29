/*
Elabore un programa que lea un número entero y averigüe si la suma de los dígitos
del número es igual a la suma de los dígitos de su cuadrado e igual a la suma de
los dígitos de su cubo. Utilice una función que calcule la suma de los dígitos de un
número entero.
*/
#include <iostream>
using namespace std;

int descomponer_y_sumar(int x)
{	
	int acum, aux;
	
	for(int r=10; x!=0; r*=10)
	{
		aux=x % r;
		x/=10;
		acum+=aux;
	}
	
	return aux;
}	

int main()
{
	int n1;
	
	setlocale(LC_ALL, "spanish");
	cout<<"\t\t\t<<<AVERIGÜANDO :D>>>";
	cout<<"\n\nIngrese el número entero: ";	cin>>n1;
	
	if((descomponer_y_sumar(n1) == descomponer_y_sumar(n1*n1)) == descomponer_y_sumar(n1*n1*n1))
	{
		cout<<"\nLa suma de los digitos del número, del cuadrado y del cubo del mismo son iguales.\n";
	}
	else
	{
		cout<<"\nLa suma de los dígitos del número, del cuadrado y del cubo del mismo no son iguales.\n";
	}
	
	return 0;
}
