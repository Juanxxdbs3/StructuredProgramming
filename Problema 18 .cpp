/*Suponga que un tren parte de un lugar A hacia un lugar B, los cuales están distantes S1 Km, con una velocidad constante V1. 
Pero, al llegar a un punto C, el cual está entre A y B, a una distancia S2 de A, hace una escala de 30 minutos 
para finalmente partir hacia B con una velocidad diferente V2.

Al partir el tren de A, sale también un auto con una velocidad V, el cual al llegar a C hace una escala 
de 2 horas para finalmente continuar a B con la misma velocidad.
Suponiendo que el auto se mueve en una línea paralela a la del tren, elabore un programa en C++ que calcule el tiempo que 
empleará el tren y el auto para trasladarse de A a B.*/

#include<iostream>

using namespace std;

int main(){
	
	float s1, s2, tt, ta, vt1, vt2, va;
	float tt1, tt2, ta1, ta2;
	
	cout<<"\nIngrese la distancia entre A-B: "; cin>>s1;
	cout<<"\nIngrese la distancia entre A-C: "; cin>>s2;
	cout<<"\nIngrese la velocidad(km/h) del tren entre A-C: "; cin>>vt1;
	cout<<"\nIngrese la velocidad(km/h) del tren entre A-B: "; cin>>vt2;
	cout<<"\nIngrese la velocidad(km/h) del auto: ";           cin>>va;
	
	tt1= s2/vt1  + 0.5;
	tt2= s1/vt2;
	ta1= s2/va + 2;
	ta2= s2/va;
	
	tt= tt1 + tt2;
	ta= ta1 + ta2;
	
	cout<<"\nEl tiempo total empleado por el tren es de: "<<tt<<" horas"<<endl;
	cout<<"El tiempo total empleado por el auto es de: "<<ta<<" horas"<<endl;
	
	return 0;
}
