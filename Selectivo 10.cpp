/* Una compa��a vende tres tipos de autom�viles (A, B y C), cada uno de los cuales tiene:
	Precio de venta
	Porcentaje de comisi�n por ventas diferentes.
Elaborar un programa en C++ que calcule el valor de las comisiones que se deben pagar a un determinado vendedor, del cual se tienen los siguientes datos:
	Nombre del vendedor.
	Unidades vendidas del autom�vil.
	Tipo de autom�vil vendido */
#include<iostream>
#include<locale.h>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "spanish");
	char tipo, nombre[15];
	double precio, comision, total, ganado;
	int units;
	
	cout<<"\nIngrese el nombre del vendedor: "; cin>>nombre;
	
	do {
		cout<<"\nIngrese el tipo de automovil vendido por "<<nombre<<" "; 
		cout<<"(A B � C): ";
		cin>>tipo;
		if(!(tipo=='A' || tipo=='B' || tipo=='C'))
		{cout<<"Error: Tipo de auto no v�lido.";}}while(!(tipo=='A' || tipo=='B' || tipo=='C'));
			
	
	switch(tipo)
	{
		case'A': 	system("CLS");
					{ do{ cout<<"\nIngrese el precio por unidad: "; 
						cin>>precio;
						if(precio<0)
						   {cout<<"\nError: precio inv�lido.";}}while(precio<0);
					
					do{ cout<<"\nIngrese las unidades vendidas: "; cin>>units;
						if(units<0)
							{cout<<"\nError: Unidades inv�lidas.";}}while(units<0);			
					do{cout<<"\nIngrese el porcentaje de comisi�n por venta(%): "; 
						cin>>comision; 
						if(comision<0)
							{cout<<"\nError: Comision inv�lida";}	}while(comision<0);		
		break;	}
		
		case'B': 	system("CLS");
					{ do{ cout<<"\nIngrese el precio por unidad: "; 
						cin>>precio;
						if(precio<0)
						   {cout<<"\nError: precio inv�lido.";}}while(precio<0);
					
					do{ cout<<"\nIngrese las unidades vendidas: "; cin>>units;
						if(units<0)
							{cout<<"\nError: Unidades inv�lidas.";}}while(units<0);			
					do{cout<<"\nIngrese el porcentaje de comisi�n por venta(%): "; 
						cin>>comision; 
						if(comision<0)
							{cout<<"\nError: Comision inv�lida";}	}while(comision<0);		
		break;	}
				
		case'C': 	system("CLS");
					{ do{ cout<<"\nIngrese el precio por unidad: "; 
						cin>>precio;
						if(precio<0)
						   {cout<<"\nError: precio inv�lido.";}}while(precio<0);
					
					do{ cout<<"\nIngrese las unidades vendidas: "; cin>>units;
						if(units<0)
							{cout<<"\nError: Unidades inv�lidas.";}}while(units<0);			
					do{cout<<"\nIngrese el porcentaje de comisi�n por venta(%): "; 
						cin>>comision; 
						if(comision<0)
							{cout<<"\nError: Comision inv�lida";}	}while(comision<0);		
		break;	}
	}
	
	total=precio*units;
	ganado= total*(comision/100);
	cout<<"\nEl porcentaje de comision por de venta de auto tipo "<<tipo<<" es: "<<comision<<"%"<<endl;
	cout<<"Las ganancias totales de venta son: "<<total<<endl;
	cout<<"La comision del vendedor "<<nombre<<" es:"<<ganado<<"$";
	
	return 0;
}
