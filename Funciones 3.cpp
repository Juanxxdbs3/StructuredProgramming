/* Elaborar un programa en c++ que lea un entero positivo y a
continuación lo descomponga en sus factores primos.*/
#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int valide_number (char []);
void descompose (int );
int isprime(int );
//=======================================================================================
int main()
{
	setlocale(LC_ALL, "spanish");
	
	char chain_n[10];
	int number = 0;
	
	do
	{
		cout<<"Ingresa un número: ";	fflush(stdin);	gets(chain_n);
		
		if(valide_number(chain_n))
		{
			number = atoi(chain_n);//converting chain to interger
		}
		else
		{
			cout<<"ERROR: el caracter ingresado no es un número o es negativo"<<endl;
		}
		
	}while(valide_number(chain_n) == 0);
	
	descompose(number);
	
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
void descompose (int number)//descompose a number in prime factors
{
	cout<<"factores primos de "<<number<<endl;
	
	for(int div=2; div<=number && number !=1; div++)
	{
		while(number % div == 0)
		{
			number/=div;
			
			if(isprime(div))
			{
				cout<<div<<endl;
			}
		}
	}
}
//=======================================================================================
int isprime(int x)//verify if a digit is prime
{
	for(int r=2; r<x/2; x++)
	{
		if(x % r == 0)
		{
			return 0;
		}
	}
	
	return 1;
}
