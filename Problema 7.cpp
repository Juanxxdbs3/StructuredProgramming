/* la compañia "La veloz vende tres tipos de automoviles (A, B y C), cada uno de los cuales tiene un precio
de venta y un porcentaje de comision por venta diferente. elaborar un programa en c++ que calcule el valor 
de las comsiones que se deben pagar a un determinado vendedor del cual se tienen los siguientes datos:

a. Nombre del vendedor
b. Unidades vendidas del auto A
c. unidades vendidas del auto B
d. Unidades vendidas del auto C
*/

#include<iostream>

using namespace std;

int main(){
	
	char nv[40];
	int ua, ub, uc;
	float comision, pa=250000, pb=137000, pc=560000;
	
	cout <<"Bienvenido a Tienda la veloz"<<endl;
	cout<<"\nPor favor introduzca el primer nombre del vendedor (Sin espacios): "; cin>>nv;
	
	
	cout<<"Cantidad de autos tipo A vendidos: ";
	cin>>ua;
	
	
	if (ua>=0)	
	{cout<<"Cantidad de autos tipo B vendidos: "; 
	cin>>ub;}
	
	else 
	{cout<<"Ingrese un valor valido\n";
	return 0;}	
	
	if (ub>=0)
	{cout<<"Cantidad de autos tipo C vendidos: "; cin>>uc;}
	
	else 
	{cout<<"Ingrese un valor valido\n";
	return 0;}	
	
	comision= (pa*ua)*0.15 + (pb*ub)*0.10 + (pc*uc)*0.25;
	
	cout<<"\nEl empleado: "<<nv<<" Le corresponde una comision de: "<<comision;
	
	
	return 0;
}
