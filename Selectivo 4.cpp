/*Elaborar un programa en C++ que lea el nombre, la edad, el sexo y el estado civil 
de una persona e imprima su nombre de la persona si corresponde a un hombre casado 
mayor de N a�os o una mujer soltera menor de M a�os.*/

#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish");
	
	int edad,sexo, estado;
	char nombre[20];
	
	cout<<"Por favor introduzca su nombre: "; cin>>nombre;
	cout<<"\nPor favor introduzca su edad: "; cin>>edad;
	cout<<"\n�est� usted casado/a o soltero/a: ";
	cout<<"\t\n1. Casado/a \n2. Soltero/a: "; cin>>estado;
	cout<<"<\nPor favor seleccione su sexo: ";   
	cout<<"\n1.Masculino \n2.Femenino: ";       cin>>sexo;
	
	if(edad>0)
		if(estado==1 || estado==2)
			if(sexo==1 || sexo==2)
				{if(sexo==1 && estado==1)
					cout<<"La persona "<<nombre<<" corresponde a un hombre casado de"<<edad<<"a�os"<<endl;
				else 
	    			if(sexo==2 && estado==1)   
						cout<<"La persona "<<nombre<<" Corresponde a una mujer casada de "<<edad<<" a�os"<<endl;
				else
					if(sexo==1 && estado==2)		
						cout<<"La persona "<<nombre<<" Corresponde a un hombre soltero de "<<edad<<" a�os"<<endl;	   	
				else
					if(sexo==2 && estado ==2)
						cout<<"La persona "<<nombre<<" Corresponde a una mujer soltera de "<<edad<<" a�os"<<endl;}
			
			else
			    cout<<"ERROR: datos no v�lidos."<<endl;	    
				return 0;
	
	 system("PAUSE");
	return 0;
} 
