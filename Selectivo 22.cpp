/* A los estudiantes de un curso se les dice que su calificación final será el promedio de las dos calificaciones más
 altas de entre las tres que se han tomado. Elabore un programa en C++ que permita a un estudiante cualquiera efectuar 
 el cálculo correspondiente a su nota definitiva. El programa en C++ debe además mostrar un mensaje de aprobado o 
 reprobado según la nota definitiva.*/
 
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	float n1,n2,n3, alta1, alta2, def;
	
	do{cout<<"Ingrese la nota 1: "; cin>>n1;
		if(n1<0 || n1>5)
		 {cout<<"ERROR: nota invalida\n";}
	}while(n1<0 || n1>5);
	
	alta1=n1;
	alta2=n1;
		
		do{cout<<"Ingrese la nota 2: "; cin>>n2;
		if(n2<0 || n2>5)
		 {cout<<"ERROR: nota invalida\n";}
	}while(n2<0 || n2>5);
			
		do{cout<<"Ingrese la nota 3: "; cin>>n3;
		if(n3<0 || n3>5)
		 {cout<<"ERROR: nota invalida\n";}
	}while(n3<0 || n3>5);		
	
	if(n2>n1 && n2>n3 )
	   	{alta1=n2;
		if(n1>n3)
			{alta2=n1;}
		else
			{alta2=n3;}}
	else 
		if(n1>n2 && n1>n3)
			{alta1=n1;
			if(n2>n3)
				{alta2=n2;}
			else
				{alta2=n3;}}
	else 
		if(n3>n1 && n3>n2)
		{alta1=n3;
			if(n1>n2)
			{alta2=n1;}
			else
			{alta2=n2;}}													
			
	cout<<"\nLa nota definitiva del estudiante es: "<<(alta1+alta2)/2<<endl;

	getch();
	return 0;
}
