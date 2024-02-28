/* Elabore un programa en C++ que lea tres numeros y los ordene
de forma ascendente*/

#include<iostream>
using namespace std;

int main()
{
	float A,B,C, Aux;
	
	cout<<"Ingrese tres numeros: "; cin>>A>>B>>C;

	if (B<A)
	{
	Aux = A;
	A = B;
	B = Aux;
	}
		if (C<A)
		{
			Aux = A;
			A = C;
			C = Aux;
		}
			if (C<B)
			{
				Aux = B;
				B = C;
				C = Aux;}
	
	cout<<"El orden ascendente de los numeros es: "<<A<<", "<<B<<", "<<C<<endl;
	return 0;
	
}


