/*Juan Diego Bello Santiago; codigo: 0221910021*/
#include<iostream>
#include<locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish");
	
	long producidos, defectuosos;
	float  ausencia;
	int grado=5;
	char codigo[10];
	
	system("COLOR 7C");
	cout<<"\t--->>>Grado de Eficiencia<<<---"<<endl;
	
	//Leemos los datos
	
		cout<<"Ingrese el c�digo del trabajador: "; 			
		cin>>codigo;
	
	/*Se valida si los tornillos defectuosos son m�s que los producidos
	y si los datos introducidos son correctos*/
	do{
		
		do{
			cout<<"\nIngrese los tornillos producidos: "; 			
			cin>>producidos;	
			if(producidos<0)
				cout<<"ERROR: Cantidad de tornillos producidos no v�lida."<<endl;
			}while(producidos<0);
	
		do{
			cout<<"Ingrese los tornillos defectuosos: ";			
			cin>>defectuosos;	
			if(defectuosos<0)
				cout<<"ERROR: Cantidad de tornillos defectuosos no v�lida."<<endl;
			}while(defectuosos<0);
			
			if(defectuosos>producidos)
				cout<<"ERROR: hubo un fallo al introducir los datos.\n";
	}while(defectuosos>producidos);
	
	do{
		cout<<"Ingrese las horas ausentes del trabajador: ";
		cin>>ausencia;
		if(ausencia<0)
			cout<<"ERROR: horas de ausencia no v�lidas."<<endl;
	}while(ausencia<0);
	
	cout<<"�Datos introducidos satisfactoriamente!"<<endl;
	
	//aqu� identificamos los casos que se pueden dar de los diferentes grados
	if(ausencia<=3.5) //empezando desde la primera condici�n (Horas de ausencia) 
		{
			if(defectuosos<300)  
		   	  {			   	  
			    if(producidos>10000)//solamente se entra aaqu� si la segunda condici�n se cumple.
					grado= 20;
				else
					grado= 12;}
			/*esta parte evalua si se cumplen la tercera y la primera condicion 
			ya que aunque m�s abajo hace lo mismo, parte de un punto diferente*/
			else 
				{
				if(producidos>10000)
					grado= 13;		
							
				else
					grado= 7;}}
	//se necesita para evaluar si solamente se cumple la segunda condici�n, ya que desde lo anterior no se puede.
	else 
		if(defectuosos<300)
			{
				if(producidos>10000)				
					{grado=15;}
				else
					grado=8;}
	//para evluar si solamente se cumple la tercera condici�n.
	else
		if(producidos>10000)
			{
				if(ausencia<=3.5)
					{grado=13;}
				else
					if(ausencia>3.5)
						grado=9;}								
	else
		grado=5;
	//cambiamos de pantalla
	system("CLS");	
	cout<<"************************************************"<<endl;
	cout<<"\nTrabajador: "<<codigo<<endl;
	cout<<"El grado de eficiencia es de : "<<grado<<endl;
	cout<<"\t\n_______________Process ended_______________"<<endl;		
		
	system("PAUSE");
	return 0;
}
