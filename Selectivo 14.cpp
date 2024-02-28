/* Para un empleado se tienen los siguientes datos:
Nombre del empleado.
Salario básico por hora.
Horas ordinarias trabajadas.
Horas extras diurnas trabajadas.
Horas extras nocturnas trabajadas.
Horas extras dominicales trabajadas.
Elabore un programa en C++ que calcule e imprima:
Nombre del empleado.
Salario neto a pagar.
Valor de la retención en la fuente.
Teniendo en cuenta que las horas extras tienen los siguientes recargos:
Horas extras diurnas: 25%.
Horas extras nocturnas: 50%.
Horas extras dominicales: 75%.
Y que el 10% de retención en la fuente se aplica a las horas extras trabajadas, solo 
si el valor devengado por este concepto es superior a $200.000.*/
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "spanish");
	char nombre[15];
	int ord,ext,dom,noc,diu;
	double salario, retet=0, retex=0, neto=0;
	
	
	cout<<"\t>>>Averigüe su salario<<<"<<endl;
	cout<<"Ingrese su nombre: "; 							cin>>nombre;
	do
	{
	 cout<<"\nIngrese el su salario básico por hora: "; 	cin>>salario;
	 cout<<"\nIngrese las horas ordinarias trabajadas:"; 	cin>>ord;
	 cout<<"\nIngrese las horas extras nocturnas: ";		cin>>noc;
	 cout<<"\nIngrese las horas extras diurnas: ";			cin>>diu;
	 cout<<"\nIngrese las horas extras dominicales: ";		cin>>dom;
	
	if(salario<=0)
	 	cout<<"ERROR: Ingrese un salario válido.";
	 
	if(ord<0)
		cout<<"ERROR: horas ordinarías inválidas.";	
 
	if(ext<0)
		cout<<"ERROR: horas extras inválidas.";
		
	if(noc<0)
			cout<<"ERROR: horas nocturnas inválidas";
			
	if(diu<0)
			cout<<"ERROR: horas diurnas inválidas.";		
	}while(salario<=0 || ord<0 || ext<0 || noc<0 || diu<0);
	
	
	ext= ((dom*salario)*1.75+noc*salario*1.5+diu*salario*1.25);
	
	if(ext>200000)
		retex= ext*0.1;
		
	retet=salario*ord*0.1 + retex;
	neto= ((salario*ord)-retet)+(ext-retex);	
	
	system("CLS");
	cout<<"Nombre del empleado: "<<nombre<<endl;
	cout<<"Salario neto del empleado: "<<neto<<endl;
	cout<<"Valor de la retención: "<<retet<<endl;
	
	return 0;
}
