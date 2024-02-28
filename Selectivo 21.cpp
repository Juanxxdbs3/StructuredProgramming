/* Una compañía ha decidido dar a sus mejores empleados una bonificación por su desempeño. Esta bonificación se basa en dos criterios:
	El número de horas extras trabajadas y
	El número de horas que el empleado ha estado ausente del trabajo.
La compañía ha determinado que se use la siguiente fórmula para determinar la bonificación: se restan dos tercios de 
las horas de ausencia a las horas extras trabajadas y se distribuye la bonificación de acuerdo con la siguiente tabla:

Resultado Bonificación
	> 40 horas $200.000,oo	
	> 30 horas pero <= 40 horas $150.000,oo
	> 20 horas pero <= 30 horas $100.000,oo
	> 10 horas pero <= 20 horas $50.000,oo
	<= 10 horas $20.000,oo
Elabore un programa en C++ que permita determinar la bonificación que recibirá un empleado cualquiera de la compañía.*/
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
