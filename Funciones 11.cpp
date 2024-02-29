#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int valide_number (char []);//RETURNS 1 IF IS A DIGIT, 0 in opposite case 
long add_divisors (long );//Fuction that return the sume of the divisors of a number
void amigos (long );//function that verifies if a couple number are friends
//=======================================================================================
int main()
{
	setlocale(LC_ALL, "spanish");
	cout<<"==Números amigos== "<<endl<<endl;
	 
	//variables
	long length;
	char chain1[10];
	
	do//validamos el número 1.
	{
		cout<<"Ingrese un número positivo: ";	fflush(stdin);	gets(chain1);
		
		if(valide_number(chain1))
		{
			length = atoi(chain1);
		}
		else
		{
			cout<<"(!) El valor ingresado no es un número positivo."<<endl;
		}
	}while(valide_number(chain1) == 0);
	
	if(length < 6)
	{
		cout<<"\nN/A"<<endl;
	}
	else
	{
		for(int r = 6; r<=length; r++)
		{
			amigos(r);
		}
	}
	
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
long add_divisors (long n)
{
	long acum = 0;
	
	for(int r=1; r<=n/2; r++)
	{
		if(n % r == 0)
		{
			acum+= r;
		}
	}
	
	return acum;
}
//=======================================================================================
void amigos(long number_basic)
{
	
	long posibility, sum_posibility;
	static int cont = 1;
	
	posibility = add_divisors(number_basic);
	sum_posibility = add_divisors(posibility);
	
	if((sum_posibility == number_basic) && (number_basic <= posibility))
	{
		cout<<cont<<". "<<number_basic<<" - "<<posibility<<endl;
		cont++;
	}
	
}
//=======================================================================================
