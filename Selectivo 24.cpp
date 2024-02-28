/*
Elabore un programa en C++ lea la longitud y el diámetro de una pieza en forma de
varilla y muestre un mensaje que indique si se acepta o rechaza la pieza, de acuerdo
con los siguientes criterios:
	-Su longitud debe ser mayor que 7,5 cm pero no puede exceder los 9 cm.
	-Su diámetro no debe ser menor que 0,5 cm ni mayor que 1,3 cm.
	-Por ningún motivo su masa debe exceder los 5,8 gr. (masa = volumen * densidad,
	 densidad = 3,5 gr/cm3).
*/
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	float lon, diam, vol, rad;
	float d=3.5,masa;
	int acum=0,acum2=0;
	
	cout<<"\t--->>>La varilla<<<---"<<endl;
	
	do
	{
	cout<<"Ingrese la longitud de la varilla en cm: ";		cin>>lon;
	cout<<"Ingrese el diametro de la varilla en cm: ";		cin>>diam;
	
	if(lon<0)
		cout<<"ERROR: longitud no válida."<<endl;
	if(diam<0)
			cout<<"ERROR: diametro no válido."<<endl;	
	}while(diam<0 || lon<0);
	
	rad= diam/2;
	vol= (pow(rad,2))*3.1415;
	vol*=lon;
	masa= vol*d;
	cout<<"Masa: "<<masa<<endl;
	cout<<"Volumen: "<<vol<<endl;
	if(lon>7.5 && lon<9)
		acum++;
	else
		acum2++;
		
	if(diam>=0.5 && diam<1.3)
		acum++;
	else
		acum2++;
		
	if(masa<=5.8)
		acum++;
	else
		acum2++;				
		
	if(acum==3)
		cout<<"LA PIEZA ES ACEPTADA."<<endl;
	else
		cout<<"LA PIEZA ES RECHAZADA :( \nsigue intentando."<<endl;	

	cout<<"Condiciones cumplidas: "<< acum<<endl;
	cout<<"Condiciones rechazadas: "<< acum2<<endl;
	
	return 0;
}	
