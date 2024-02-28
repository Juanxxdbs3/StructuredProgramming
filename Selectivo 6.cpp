/*Para un empleado se tienen los siguientes datos:
	Nombre del empleado.	
	Salario básico por hora.
	Horas ordinarias trabajadas.
	Horas extras trabajadas.

Elabore un programa en C++ que calcule e imprima:
	Nombre del empleado.
	Salario neto a pagar.
	Valor de la retención en la fuente.

Teniendo en cuenta que las horas extras tienen un recargo del 40% y la retención en la fuente (10%) 
se aplica a las horas extras trabajadas, si el total obtenido por este concepto es superior a $100.000.*/

#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish");
	float basico;
	int ordinarias, extras;
	double neto, retefuente, salario, salario_extras;
	char nombre[15];
	
	cout<<"Por favor ingrese el nombre del empleado: "; gets(nombre);
	cout<<"\nSalario básico por hora: "; 				cin>>basico;
	cout<<"\nHoras trabajadas: ";						cin>>ordinarias;
	cout<<"\nHoras extras: ";							cin>>extras;
	
	salario= basico*ordinarias;
	salario_extras=((extras*1.4)*basico);
	
	if(salario_extras>100000)
		{salario_extras-= (salario_extras*0.1);}
		
	retefuente= (salario+salario_extras)*0.1;
	neto= (salario + salario_extras)-retefuente;
	
	cout<<"El empleado: "<<nombre<<endl;
	cout<<"El salario neto es: "<<neto<<" $"<<endl;
	cout<<"La retencion en la fuente es: "<<retefuente<<" $"<<endl;
	
	getch();
	return 0;
}
