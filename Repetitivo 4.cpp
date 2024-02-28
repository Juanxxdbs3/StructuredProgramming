/* Elaborar un programa en C++ que lea un número entero positivo 
y obtenga los múltiplos de X comprendidos entre X y el número leído.*/
#include<iostream>
using namespace std;

int main()
{
	long x, n, res;
	
	do
	{
		cout<<"\nIngrese el numero positivo: ";	cin>>n;	
		
		if(n<=0)
		cout<<"\nERROR: no puede ser un numero negativo.";
	}while(n<0);
	
	x=1;
	while(x<=n)
	{
		cout<<"\nMultiplos de: "<<x<<endl;
		for(int i=1; i<=n; i++)
		{
			res= x*i;
			
			if(res<=n)
			{
				cout<<res<<" ";
			}
		}
		
		x++;
	}
	
	cout<<"\n";
	
	system("PAUSE");
	return 0;
}
