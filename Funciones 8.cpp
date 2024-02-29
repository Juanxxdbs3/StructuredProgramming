/*
	Escriba una función que calcule X*N para
	X real y N entero;
*/
#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <windows.h>
using namespace std;                           

int valide_float (char []);// RETURN 1 if it´s a Number RETURN 0 if chain is not a number
int valide_int (char []);
double mixed (double real, long interger);//función que permite multiplicar un entero y un real;

int main()
{
	/*setlocale(LC_ALL, "spanish"); ____PROBLEMA: AL incluir el paquete de idiomas la función atof deja de funcionar correctamente.
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);*/
	cout<<"==Calculo de XN==\n\n";
	
	char chain1[10];
	char chain2[10];
	long entero;
	double real;
	
	do//validamos ele entero
	{
		cout<<"Ingrese el numero entero: ";		fflush(stdin);	gets(chain1);
		
		if(valide_int(chain1))
		{
			entero  = atoi(chain1);
		}
		else
		{
			cout<<"(!) Lo ingresado no es un numero entero."<<endl;
		}
		
	}while(valide_int(chain1) == 0);
	
	do
	{
		cout<<"Ingrese el numero real: ";	fflush(stdin);	gets(chain2);
		
		if(valide_float(chain2))
		{
			real = atof(chain2);
		}
		else
		{
			cout<<"(!) Lo ingresado no es un numero."<<endl;
		}
	}while(valide_float(chain2) == 0);
	
	cout<<"La multiplicacion de XN: "<<mixed(real,entero)<<endl;
	
	getch();
	return 0;
}

//================================================================================
int valide_float (char chain[])
{
	int sw, length;
	length = strlen(chain);//we get the lenght of the chain
	
	for (int i=0; i<length; i++)//lets watch for a every caracter verifyng would be a number
	{
		if(isdigit(chain[i]) || chain[i]== '.' || chain[i] == '-')
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
//================================================================================
int valide_int (char chain[])
{
	int sw, length;
	length = strlen(chain);//we get the lenght of the chain
	
	for (int i=0; i<length; i++)//lets watch for a every caracter verifyng would be a number
	{
		if(isdigit(chain[i]) || chain[i] == '-')
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

//================================================================================}
double mixed(double real, long interger)
{
	int pot=0;
	long trans;//variable que guardará la transformación del real
	double result;
	
	trans = real;
	while(trans/real !=1 )//convertimos el número real a entero (ej: 0,5 = 5/10 )
	{
		pot++;
		real*=10;
		trans = real;
	}
	
	result= (trans*interger)/(pow(10,pot));//lo multiplicamos en forma de fracción
	
	return result;
}
