#include<iostream>
using namespace std;

int main()
{
	long n;
	long result=0;
	long max=0, lon=0;
	
	cout<<"---<<<Granizada de n>>>---\n\n";
	
	do
	{
		cout<<"\nIngrese el número inicial: ";	cin>>n;
		
		if(n<=1)
			cout<<"El número debe ser mayor que 1.\n";
	}while(n<=1);
	
	cout<<"f("<<n<<")\n";
	max=n;
	
	if(n%2==0)
	{
		result= n/2;
	}
	else
	{
		result= 3*n +1;
	}
	if(result>max)
	{
		max=result;
	}
	
	cout<<"La granizada de "<<n<<" es: "<<n<<" "<<result<<" ";
	
	for(lon=2; result!=1; lon++)
	{
		if(result%2==0)
		{
			result/=2;
		}
		else
		{
			result= 3*result+1;
		}
		
		if(result>max)
		{
			max=result;
		}
		
		cout<<result<<" ";
	}
	
	cout<<"\nEl máximo es: "<<max<<endl;
	cout<<"La longitud es: "<<lon<<endl;
	
	return 0;
}
