/* Elaborar un programa en C++ que imprima los números pares comprendidos entre 1 y N*/
#include<iostream>
using namespace std;

int main()
{
	int n, num;
	
	cout<<"Ingrese n: ";	cin>>n;
	
	while(num<=n)
	{
		if(num%2==0)
		{
			cout<<num<<" ";
		}
		
		num++;
	}
	
	system("PAUSE");
	return 0;
	
}
