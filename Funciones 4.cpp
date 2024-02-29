/*  Elabore un prorama en C++ que reciba 
	como dato de entrada do enteros positivos 
	n y b(entre 2 y 16) y exprese el numero n
	en su base b*/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
using namespace std;

void Converter (long , long );
int valide_number (char []);

 /*La forma para hacer esto es por medio de la division, es decir
 dividimos el numero en base 10 mientras que el cociente sea mayor que
 la base a conveertir el n�mero y tomamos en reversa los n�meros:
 cociente - residuo1 - residuo2-...-residuon*/
//============================================================================
void Converter(long decimal, long base)
{
	long copy = decimal, cociente=0;
	int size=0, pot=0 ;//variable que lleva la cuenta de potencias de base para el tama�o de vector; variable de potencia; 
	
	if(decimal < base)//si el numero a convertir es menor a su base es el mismo n�nmero
	{
		cout<<"El n�mero "<<decimal<<" en base "<<base<<"es: "<<decimal<<"("<<base<<")"<<endl;
	}
	else
	{
	
		pot=-1;
		while(size <= decimal )//buscamos el tama�o necesario para el vector
		{
			pot++;
			size += pow(base,pot);
			
		}
	
		long chain[size];//vector que se usar� para guardar el n�mero.
		int pos=size-1;//posici�n en el vector
	
		while(decimal >= base)
		{
			while(decimal >= base)//divisi�n por restas sucesivas
			{
				decimal-= base;
				cociente++;
			}
		
			if(decimal < base) //si ya no se puede dividir m�s, se toma el �ltimo cociente como primer n�mero
			{
				 chain[pos]=decimal;
			 	pos--;
			 	chain[pos]=cociente;
			}
			else
			{
				chain[pos]=decimal;
				pos--;
			}
			
			decimal=cociente;
			cociente=0;
		}
		
		//Imprimir array 
		cout<<"El n�mero "<<copy<<" en base "<<base<<" es: ";
		for(pos;/*desde la posici�n guardaada*/ pos<size; pos++)
		{
			if(chain[pos]<16 && chain[pos]>=10)
			{
				switch(chain[pos])
				{
					case 10:
						{
							cout<<"A";
						}break;
					
					case 11:
						{
							cout<<"B";
						}break;
					
					case 12:
						{
							cout<<"C";
						}break;
					
					case 13:
						{
							cout<<"D";
						}break;
					
					case 14:
						{
							cout<<"E";
						}break;
				
					case 15:
						{
							cout<<"F";
						}break;
				}//end switch
			
				continue;
			}//end if
		
			cout<<chain[pos];
		}//end for
		
		cout<<"("<<base<<")"<<endl;
	}
}
//============================================================================
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
//============================================================================
int main()
{
	setlocale(LC_ALL, "spanish");
	
	char chain1[10];
	char chain2[10];
	long n1,n2;
	bool sw;
	
	cout<<"\t\t<<CONVERSOR DE BASE>>"<<endl<<endl;
	
		do//validamos que sea un n�mero lo que se ingrese
		{
			cout<<"Ingrese un n�mero positivo: ";	fflush(stdin);	gets(chain1);
			
			if(valide_number(chain1) == 0 )
			{
				cout<<"ERROR: el valor ingresado es negativo o no es un n�mero."<<endl;
			}
			else
			{
				n1=	atoi(chain1);
			}
			
		}while(valide_number(chain1) == 0);
		
		do//Validamos la base
		{
			sw=false;
			
			cout<<"Ingrese un n�mero positivo entre 2 y 16: ";	fflush(stdin);	gets(chain2);
			
			if(valide_number(chain2) == 0)
			{
				cout<<"ERROR: el valor ingresado es negativo o no es un n�mero."<<endl;
			}
			else
			{
				n2= atoi(chain2);
				
				if(n2<2 || n2>16)
				{
					sw=true;
					cout<<"ERROR: el n�mero ingresado no est� entre 2 y 16."<<endl;
				}
			}
		}while(valide_number(chain2) == 0 || sw );
			
		cout<<"\n";
		
	Converter(n1, n2);
	
	getch();
	return 0;
}
