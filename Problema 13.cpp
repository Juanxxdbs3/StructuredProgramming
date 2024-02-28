/* Un corredor de maratón (distancia = 42,195 Km) ha hecho el recorrido en T horas y
K minutos. Elabore un programa en C++ que calcule la velocidad media del corredor en
Km/h, Km/s, m/s, m/min y Km/min.*/

#include<iostream>

using namespace std;

int main(){
	
	int t,m,s,k,tt;
	float distancia=42.195,metross,metrosm,kmh,kms,kmm;
	
	cout<<"Ingrese el numero total de horas recorridas: "; cin>>t;
	cout<<"Ingrese el numero de minutos recorridos dentro de la hora: "; cin>>k;
	
	tt= (t*60) + k;
	
	kmh= distancia/((tt-k)/60);
	kms= distancia/tt*3600;
	kmm=distancia/tt;
	metross=distancia/tt*3600;
	metrosm=distancia/tt;
	
	cout<<"La velocidad media del corredor en km/h es de: "  <<kmh<<"km/h\n";
	cout<<"La velocidad media del corredor en km/m es de: "  <<kmm<<"km/min\n";
	cout<<"La velocidad media del corredor en km/s es de: "  <<kms<<"km/s\n";
	cout<<"La velocidad media del corredor en m/s es de: "   <<metross<<"m/s\n";
	cout<<"La velocidad media del corredor en m/min es de: " <<metrosm<<"m/min\n";
	
	return 0;
	
}
