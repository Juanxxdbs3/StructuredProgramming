/*
Elabore un programa que lea un n�mero entero y averig�e si la suma de los d�gitos
del n�mero es igual a la suma de los d�gitos de su cuadrado e igual a la suma de
los d�gitos de su cubo. Utilice una funci�n que calcule la suma de los d�gitos de un
n�mero entero.
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
	cout<<"\t\t\t<<<AVERIG�ANDO :D>>>";
	cout<<"\n\nIngrese el n�mero entero: ";	cin>>n1;
	
	if((descomponer_y_sumar(n1) == descomponer_y_sumar(n1*n1)) == descomponer_y_sumar(n1*n1*n1))
	{
		cout<<"\nLa suma de los digitos del n�mero, del cuadrado y del cubo del mismo son iguales.\n";
	}
	else
	{
		cout<<"\nLa suma de los d�gitos del n�mero, del cuadrado y del cubo del mismo no son iguales.\n";
	}
	
	return 0;
}
