/* Elabore un programa en C++ que lea tres números (A, B y C) y diga cuál es el mayor.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	
	int a, b, c, mayor;
	
	cout<<"Ingrese un numero: "; cin>>a;
	cout<<"Ingrese otro numero: "; cin>>b;
	cout<<"Ingrese otro numero: "; cin>>c;
	
	if(a>b && a>c)
		mayor=a;
	else if(b>a && b>c)
		mayor=b;
	else if(c>a && c>b)
		mayor=c;
	else 
		if(a==b)
			{cout<<"Hay dos numeros iguales: "<<a<<endl;
			if(c>a)
				{mayor=c;}
			else
				{cout<<"El numero mayor es:"<<a<<endl;
				return 0;}}
	else 
		if(a==c)
			{cout<<"Hay dos numeros iguales: "<<a<<endl;
				if(b>a)
					{mayor=b;}
				else
					{cout<<"El numero mayor es:"<<a<<endl;
					return 0;}	}
	else 
		if(c==b)
			{cout<<"Hay dos numeros iguales: "<<c<<endl;
				if(a>c)
					{mayor=a;}
				else
					{cout<<"El numero mayor es:"<<b<<endl;
					return 0;}}			
	
	cout<<"El numero mayor es: "<<mayor<<endl;
	getch();
	return 0;
}
