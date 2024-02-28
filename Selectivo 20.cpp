#include<iostream>
using namespace std;

int main(){
	
	double s1,s2,vt1,vt2,va,ta,tt;
	
	cout<<"--->>>Career between train and car<<<---"<<endl;
	do{
	
	cout<<"Ingrese la distancia entre A y C(km): ";				cin>>s1;
	cout<<"Ingrese la distancia entre C y B(km): ";				cin>>s2;
	cout<<"Ingrese la velocidad del tren entre A y C (km/h): "; cin>>vt1;
	cout<<"Ingrese la velocidad del tren entre C y B (Km/h): ";	cin>>vt2;
	cout<<"Ingrese la velocidad del auto (km/h): ";				cin>>va;
	
	if(s1<0 || s2<0 || vt1<0 || vt2<0 || va<0)
		cout<<"ERROR: datos no validos."<<endl;} while(s1<0 || s2<0 || vt1<0 || vt2<0 || va<0);
	
	tt=(s1/vt1 + 0.5) + (s2/vt2);
	ta=(s1/va + 2) + (s2/va);
	
	if(ta>tt)
		cout<<"El tren llega primero que el auto."<<endl;
	else
		if(tt>ta)
			cout<<"El auto llega primero que el tren."<<endl;
	else
		cout<<"Ambos llegan al mismo tiempo."<<endl;
	
	cout<<"\nEl tiempo empleado por el tren es de: "<<tt<<" horas"<<endl;
	cout<<"El tiempo empleado por el auto es de: "<<ta<<" horas"<<endl;			
	
	return 0;
}
