/* Coldeportes Bol�var est� interesada en promover el Basketbol y para ello desea conocer personas que tengan las siguientes caracter�sticas:
Edad: Menor de 18 a�os.
Estatura: M�nima, 1,80 cm.
Peso: M�ximo, 80 Kg.
Elaborar un programa en C++ que lea la edad, la estatura y el peso de un deportista y verifique si cumple o no las condiciones exigidas.*/

#include<iostream>

using namespace std;

int main()
{
	int edad;
	float alt, peso;
	
	cout<<"Ingrese la edad del aspirante: ";          cin>>edad;
	cout<<"Ingrese la estatura (cms)del aspirante: "; cin>>alt;
	cout<<"Ingrese el peso (kg)del aspirante: ";      cin>>peso;
	
	if(edad<18)
	   if(alt>180)
	       if(peso<=80)
	          cout<<"El aspirante cumple con los requisitos minimos"<<endl;
	else
	    cout<<"El aspirante no cumple con los requisitos minimos"<<endl;      
		else
	         cout<<"El aspirante no cumple con los requisitos minimos"<<endl; 
		    else
	          cout<<"El aspirante no cumple con los requisitos minimos"<<endl;      
	
	return 0;
}
