/* Elabore un programa en C++ que lea un numero entero positivo obtenga todos los divisores 
del numero leido*/
#include<iostream>
using namespace std;

int main()
{
	long n, cont1, cont=0; 
	int v[];
	
	cout<<"Ingrese los divisores del numero: ";	cin>>n;
	
	for(int i=2; i<=n/2; i++)
	{
		if(n%i==0)
		{
			v[cont]=i;
			cont++;
		}
	}

	cout<<"Divisores: "<<endl;	
	for(cont1=0; cont1<=cont; cont1++)
	{
		cout<<v[cont1]<<" ";
	}
	
	system("PAUSE");
	return 0;
}
