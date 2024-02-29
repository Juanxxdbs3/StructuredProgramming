#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int valide_number (char []);//RETURNS 1 IF IS A DIGIT, 0 in opposite case 
void mayor (long , long);//funci�n que averigua c�al es el n�mero mayor y el menor.
void mcd (long , long);//funci�n que averigua el mcd
//=======================================================================================
int main()
{
	setlocale(LC_ALL, "spanish");
	cout<<"==M�ximo Com�n Divisor :)\n\n";
	
	char chain1[10];
	char chain2[10];
	long number1, number2;
	
	do//validamos el primer n�mero
	{
		cout<<"Ingrese un n�mero entero: ";		fflush(stdin);	gets(chain1);
		
		if(valide_number(chain1))
		{
			number1 = atoi(chain1);
		}
		else
		{
			cout<<"El valor ingresado no es un n�mero."<<endl<<endl;	
		}
		
	}while(valide_number(chain1) == 0);
	
	do//Validamos el segundo n�mero
	{
		cout<<"Ingrese otro n�mero: ";			fflush(stdin);	gets(chain2);
		
		if(valide_number(chain2))
		{
			number2 = atoi(chain2);
		}
		else
		{
			cout<<"El valor ingresado no es un n�mero\n\n";
		}
	}while(valide_number(chain2) == 0);
	
	mayor(number1,number2);
	getch();
	
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
void mayor(long n1, long n2)
{
	long mayor, menor;
	
	if(n1 > n2)
	{
		mayor = n1;
		menor = n2;
	}
	else
	{
		mayor = n2;
		menor = n1;
	}
	
	mcd(mayor, menor);
}
//=======================================================================================
void mcd(long mayor, long menor)
{
	long aux;
	
	if(mayor == 0 || menor == 0)
	{
		cout<<"El MCD Puede ser cualquier n�mero o el n�mero mayor."<<endl;
		exit(0);	
	}
	else
	{
		while(mayor % menor != 0)//M�todo de Euclides.
		{
			aux  = mayor;
			mayor = menor;
			menor = aux % menor;
		}
		
		cout<<"El MCD es "<<menor<<"\n";
	}
} 
//=======================================================================================
