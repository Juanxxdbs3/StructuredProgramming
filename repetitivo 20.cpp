/*Considere la siguiente serie:
	
	a, (a + d)r, (a + 2d)r2 . . . (a + (n-1)d)rn-1
	
Elabore un programa en C++ que lea los valores de a, d, r y n y calcule e imprima 
la suma de los n primeros términos de la serie.*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//variables
	int n=0, cont=0;
	long a=0, d=0, r=0;
	long result=0, acum=0;
	
	cout<<"\t\t<<<SERIE>>>\n";
	
	do
	{
		cout<<"\nIngrese la cantidad de números de la serie: ";	cin>>n;
		cout<<"Ingrese variable \"a\": ";						cin>>a;
		cout<<"Ingrese la variable \"d\": ";					cin>>d;
		cout<<"Ingrese la variable \"r\": ";					cin>>r;
		
		if(a==0 || d==0 || r==0 || n==0)
		{
			cout<<"ERROR: las variables no pueden ser cero\n";
		}
	}while(a==0 || d==0 || r==0 || n==0);
	
	cont=n;
	
	for(int i=1; i<= cont; i++)
	{
		result=0;
		if(i==1)
		{
			printf("%lf , ",a);
			acum+=a;
			continue;
		}
		
		result=a +(n*d);
		result*= pow(r,n);
		acum+=result;
		n--;
		
		printf("%lf , ", result);
	
	}
	
	cout<<"La suma de la serie es: "<<acum<<" \n";
	
	system("PAUSE");
	return 0;
}
