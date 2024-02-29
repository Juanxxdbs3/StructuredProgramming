#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int valide_number (char []);//RETURNS 1 IF IS A DIGIT, 0 in opposite case 
long divisores (long );

//=======================================================================================
int main()
{
	setlocale(LC_ALL, "spanish");
	cout<<"==SumaDIV==\n\n";
	
	char chain[10];
	long number;
	
	do//validamos el número.
	{
		cout<<"Ingrese un número entero: ";		fflush(stdin);	gets(chain);
		
		if(valide_number(chain))
		{
			number = atoi(chain);
		}
		else
		{
			cout<<"El valor ingresado no es un número entero.\n\n";
		}
		
	}while(valide_number(chain) == 0);
	
	cout<<"La suma de los divisores del número es: "<<divisores(number)<<endl;
	getch();
	return 0;
}
//=======================================================================================
int valide_number (char chain[])
{
	int sw, length;
	length = strlen(chain);//we get the lenght of the chain
	
	for (int i=0; i<length; i++)//lets watch for a every caracter verifyng would be a number
	{
		if(isdigit(chain[i]))
		{
			sw = 1;
		}
		else
		{
			sw = 0;
			break;
		}
	}
	
	return sw;
}
//=======================================================================================
long divisores(long n)//esta función saca cada divisor diferente de n y los acumula...
{
	long acum = 1;
	
	if(n == 1)
	{
		return 0;
	}
	
	for(int r = 2; r<=n/2; r++)
	{
		if(n  % r == 0)
		{
			acum += r;
		}
	}
	
	return acum;
}
//=======================================================================================
