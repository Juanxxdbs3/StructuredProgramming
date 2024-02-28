/*Elabore el programa que utilizó el prgramador para saber cuantos habitantes habria en cartagena el 31 de diciembre*/

#include<iostream>

using namespace std;

int main(){
	
	int habitcart, habitbol, habitcart1, habitcart2,habitcartfinal;
	
	cout<<"Ingrese la cantidad de habitantes en cartagena: "; cin>>habitcart;
	cout<<"\nIngrese la cantidad de habitantes en Bolivar: "; cin>>habitbol;
	
	habitbol= habitbol-habitcart;
	habitcart1=habitcart -(habitcart*0.02);
	habitcart1=habitcart1 +(habitbol*0.005);
	habitcart2=habitcart1+(habitcart1*0.05);
	habitcartfinal= habitcart2 - (habitcart2*0.08);
	
	cout<<"\nEl 31 de diciembre habra en Cartagena "<<habitcartfinal<<" habitantes"<<endl;
	
	return 0;
}
