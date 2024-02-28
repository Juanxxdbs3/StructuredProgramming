/*Coldeportes Bol�var est� interesada en promover el Basketbol y para ello desea 
conocer personas que tengan las siguientes caracter�sticas:
	-Edad: Menor de 18 a�os.
	-Estatura: M�nima, 180 cm.
	-Peso: M�ximo, 80 Kg.

N personas se presentan en las instalaciones de Coldeportes manifestando su deseo de participar 
en ese deporte. Elaborar un programa en C++ que lea la edad, la estatura y el peso de las personas 
interesadas y calcule e imprima.

	-N�mero de personas que cumplen las condiciones exigidas.
	-N�mero de personas que no cumplen las condiciones exigidas.
	-Promedio de estatura de las personas que cumplen las condiciones.
	-Edad, estatura y peso de la persona m�s alta que se present�.*/
#include <iostream>
#include<locale.h>
using namespace std;

int main()
{
	int edad;
	float est, peso;
	int ncc=0, ncn=0, n;//Variables contadoras
	float promest, esmax, pmax, edmax;//Variables de promedios
	
	setlocale(LC_ALL, "spanish");
	cout<<"--->>>�Entra al equipo de Basket!<<<---"<<endl;
	
	//validamos el numero de personas
	do
	{
		cout<<"�C�antas personas se presentaran?: ";	cin>>n;
		
		if(n<0)
		{
			cout<<"ERROR: �numero tiene que ser mayor que cero!\n";
		}
	}while(n<0);
	
	esmax=0;
	promest=0;
	system("CLS");
	for(int cont=1; cont<=n; cont++)//Evaluamos los datos persona a persona
	{
		cout<<"\t---<<<Revisi�n de Personal>>>---\n";
		cout<<"\nPersona: "<<cont<<endl;
		do
		{
			cout<<"Ingrese la estatura en cm: ";	cin>>est;
			cout<<"Ingrese el peso en kg: ";		cin>>peso;
			cout<<"Ingrese la edad: ";				cin>>edad;
			
			if(edad<0 || est<0 || peso<0)
			{
				cout<<"ERROR: datos inv�lidos.\n";
			}
		}while(edad<0 || est<0 || peso<0);//validamos datos
		
		if(est>esmax)//buscamos altura m�xima y por ende sus datos
		{
			esmax=est;
			pmax =peso;
			edmax=edad;
		}
		
		if(edad<18 && peso<=80 && est>=180)//Verificamos si se admite a la persona
		{
		
			cout<<"La persona es admitida."<<endl;
			ncc++;
			promest+=est;	
		}
		else
		{
			ncn++;
			cout<<"La persona no es admitida.\n";
		}
		
		system("Pause");
		system("CLS");//Borrar cada pasada del ciclo
	}
	system("CLS");
	
	//imprimimos datos
	cout<<"N�mero de personas admitidas: "<<ncc<<endl;
	cout<<"Numero de personas que no cumplen con las condiciones: "<<ncn;
	cout<<"\nPromedio de estaturas: "<<promest/ncc<<"Cm"<<endl;
	cout<<"datos de Persona m�s alta\n\tEstatura: "<<esmax<<"\n\tPeso: "<<pmax<<"\n\tEdad: "<<edmax<<endl;
	
	return 0;
	system("PAUSE");
}
