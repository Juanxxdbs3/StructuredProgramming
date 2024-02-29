/* Escriba una función que tome como parámetros las longitudes de 
los tres lados de un triángulo (a,b y c) y devuelva el área del 
triángulo. Área = SQRT (p (p-a) (p-b) (p-c)) donde p = (a+b+c)/2 */
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int valide_number (char []);
float area (float l1, float l2, float l3);

//=======================================================================================
int main()
{
	setlocale(LC_ALL, "spanish");
	
	char number1[10], number2[10], number3[10];
	float side1, side2, side3;
	
	do
	{
		cout<<"Ingrese e lado 1: ";	fflush(stdin);	gets(number1);
		cout<<"Ingrese e lado 2: ";	fflush(stdin);	gets(number2);
		cout<<"Ingrese e lado 3: ";	fflush(stdin);	gets(number3);
		
		if(!valide_number(number1) || !valide_number(number2) || !valide_number(number3))
		{
			cout<<"ERROR: los valores deben ser números positivos."<<endl;
		}
		else
		{
			side1 = atoi(number1);
			side2 = atoi(number2);
			side3 = atoi(number3);
		}
		
	}while(!valide_number(number1) || !valide_number(number2) || !valide_number(number3));
	
	cout<<"El area de el triangulo es: "<<area(side1,side2,side3)<<endl;
	
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
float area (float l1, float l2, float l3)
{
	float p=0, area=0;
	
	p= (l1+l2+l3)/2;
	
	area= sqrt(p*(p-l1)*(p-l2)*(p-l3));//formule of the area given three sides
	
	return area;
}
