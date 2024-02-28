/* Una compa��a ha decidido dar a sus mejores empleados una bonificaci�n por su desempe�o. Esta bonificaci�n se basa en dos criterios:
	El n�mero de horas extras trabajadas y
	El n�mero de horas que el empleado ha estado ausente del trabajo.
La compa��a ha determinado que se use la siguiente f�rmula para determinar la bonificaci�n: se restan dos tercios de 
las horas de ausencia a las horas extras trabajadas y se distribuye la bonificaci�n de acuerdo con la siguiente tabla:

Resultado Bonificaci�n
	> 40 horas $200.000,oo	
	> 30 horas pero <= 40 horas $150.000,oo
	> 20 horas pero <= 30 horas $100.000,oo
	> 10 horas pero <= 20 horas $50.000,oo
	<= 10 horas $20.000,oo
Elabore un programa en C++ que permita determinar la bonificaci�n que recibir� un empleado cualquiera de la compa��a.*/
#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;

int main()
{
	int ausentes, extras;
	double bonificacion, tiempo;
	
	cout<<"Ingrese las horas extras trabajadas: ";    cin>>extras;
	cout<<"Ingrese las horas ausentes: ";  			  cin>>ausentes;
	
	tiempo= extras-((2*ausentes)/3);
	
	if(tiempo>=0)
	{
		if(tiempo>40)
			{bonificacion=200000;}
		else
			if(tiempo>30 && tiempo<=40)
				{bonificacion=150000;}
		else
			if(tiempo>20 && tiempo<=30)
				{bonificacion=100000;}
		else
			if(tiempo>10 && tiempo<=20)
				{bonificacion=50000;}
		else
			if(tiempo<=10)
				{bonificacion=20000;}						
	}
	
	cout<<"La bonificacion del empleado es: "<<bonificacion<<endl;
	getch();
	return 0;	
}
