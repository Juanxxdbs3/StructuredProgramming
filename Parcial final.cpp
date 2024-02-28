/*Examen en el que saqué 3, Try again*/
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish");
	int n;
	
	cout<<"\t\t	<<<TRANSPORTES EL FLECHA>>>	\n";
	cout<<"\nIngrese el número de conductores: ";	cin>>n;
	
	double kms[7][n], total_kms[n], codigo[n];//matrices
	double mayorkd=0, mayorcd=0, mayordd=0, porcentaje=0, promedio=0, mayorkr=0, menorkr=0, cmayorkr=0, cmenorkr=0, nuevokm=0;//acumuladores
	int cont=0;//contadores
	int Run=1, op;//banderas
	long dia=0, cod=0, pos=0;//Efimeras
	
	for(int r=0; r<n; r++)//Inicializamos los vectores en 0
	{
		codigo[r]=0;
		total_kms[r]=0;
	}
	
	system("CLS");
	for(int c=0; c<n; c++)//lenamos la matriz
	{
		cout<<"\t\t	<<<TRANSPORTES EL FLECHA>>>	\n";
		cout<<"\nIngrese el código del conductor "<<c+1<<": ";
		cin>>codigo[c];
		
		for(int f=0; f<7; f++)//lenamos conductor por cada día
		{
			do//validar kms
			{
			
				cout<<"\nkms en el día "<<f+1<<": ";		cin>>kms[f][c];
			
				if(kms[f][c]<0)
				{
					cout<<"ERROR: kms Inválidos.\n";
				}
			
			}while(kms[f][c]<0);
			
			if(kms[c][f]>mayorkd)//El día con mayor kms recorridos
			{
				mayorcd=codigo[c];
				mayorkd=kms[f][c];
				mayordd=f;
			}
			
			total_kms[c]+=kms[f][c];//acumulamos los kms por dia en cada sector del vector
		}
		
		promedio+=total_kms[c];//acumulamos en una variable la suma de los kms total por cada conductor
		system("CLS");
	}
	
	promedio/=n;
	
	for(int f=0; f<n; f++)//buscamos el mayor y menor kms rcorridos.
	{
		if(total_kms[f]>mayorkr)
		{
			mayorkr=total_kms[f];
			cmayorkr=codigo[f];
		}
		else
		if(f==0)
		{
			menorkr=total_kms[f];
			cmenorkr=codigo[f];
		}
		
		if(total_kms[f]<menorkr)
		{
			menorkr=total_kms[f];
			cmenorkr=codigo[f];
		}
	}
	
	for(int r=0; r<n; r++)//Cantidad de conductores por debajo del promedio
	{
		if(total_kms[r]<promedio)
		{
			cont++;
		}
	}
	
	porcentaje=(100*cont)/n;//porcentaje de conductores con kms por debajo de promedio.
	
	while(Run==1)
	{
		int f,c,r;
		system("CLS");
		cout<<"\t\t	<<<TRANSPORTES EL FLECHA>>>	\n";
		cout<<"\n1.Consultar un conductor\n2.Modificar kms de un conductor\n3.Reporte recorrido por conductor\n4.Estadisticas\n5.Finalizar";
		
		do
		{
			
			cout<<"\nOpción: ";
			cin>>op;
			
			if(op!=1 && op!=2 && op!=3 && op!=4 && op!=5)
			{
				cout<<"ERROR: opción no válida\n";
			}
		}while(op!=1 && op!=2 && op!=3 && op!=4 && op!=5);
		
		switch(op)
		{
			case 1:
				{
					system("CLS");
					cout<<"Consultar un conductor.\n";
					cout<<"\nIngrese el código del conductor: ";	cin>>cod;
					
					for(r=0, pos=1; r<n; r++, pos++)//buscamos el conductor con ese codigo.
					{
						if(cod==codigo[r])
						{
							break;
						}
						
					}
					
					if(pos==n)//Si la posición llega hasta n, ya que el vector solo llega hasta n-1, el codigo no existe
					{
						cout<<"\nERROR: conductor "<<cod<<" ¡no existe!\n";
						system("PAUSE");
					}
					else//mostramos el reporte del conductor
					{
						for(f=0; f<7; f++)
						{
							cout<<"Día "<<f+1<<": "<<kms[f][pos-1]<<endl;
						}
						
						cout<<"\nTotal kms: "<<total_kms[pos-1];
						system("PAUSE");
					}
					
				}break;//cerrar case 1
			
			case 2:
				{
					system("CLS");
					cout<<"Modificar kms de un conductor\n";
					cout<<"\nIngrese el codigo del conductor: ";		cin>>cod;
					
					for(r=0, pos=1; r<n; r++, pos++)//buscamos el conductor con ese codigo.
					{
						if(cod==codigo[r])
						{
							break;
						}
					}
					
					if(pos==n)//Si la posición llega hasta n, ya que el vector solo llega hasta n-1, el codigo no existe
					{
						cout<<"\nERROR: conductor "<<cod<<" ¡no existe!\n";
						system("PAUSE");
					}
					else
					{
						pos--;
							
						for(f=0; f<7; f++)
						{
							cout<<"Día "<<f+1<<": "<<kms[f][pos]<<endl;
						}
						
						cout<<"\n¿Qué día quiere modificar?: ";		cin>>dia;	dia--;
						cout<<"Ingrese los nuevos kms: ";			cin>>kms[dia][pos];
						
						if(kms[dia][pos]>mayorkd)//Verificamos si el nuevo km, es el día con mayor km recorrido
						{
							mayorcd=codigo[pos];
							mayorkd=kms[dia][pos];
							mayordd=dia;
						}
						
						for(f=0, nuevokm=0; f<7; f++)//actualizamos los kms recorridos en total
						{
							nuevokm+=kms[f][pos];
						}
						
						total_kms[pos]=nuevokm;//Actualizado :D
						
						for(r=0, promedio=0; r<n; r++)
						{
							promedio+=total_kms[r];
						}
						
						promedio/=n;
						
						for(r=0; r<n; r++)//Cantidad de conductores por debajo del promedio
						{
							if(total_kms[r]<promedio)
							{
								cont++;
							}
						}
						
						porcentaje=(100*cont)/n;//porcentaje de conductores con kms por debajo de promedio.
						
						for(f=0; f<n; f++)//buscamos el mayor y menor kms rcorridos.
						{
							if(total_kms[f]>mayorkr)
							{
								mayorkr=total_kms[f];
								cmayorkr=codigo[f];
							}
							else
							if(f==0)
							{
								menorkr=total_kms[f];
								cmenorkr=codigo[f];
							}
		
							if(total_kms[f]<menorkr)
							{
								menorkr=total_kms[f];
								cmenorkr=codigo[f];
							}
						}
						
						cout<<"\n\n¡Modificado con Exito!\n";
						system("PAUSE");
						
					}
				}break;//Cerrar caso 2
				
			case 3:
				{
					system("CLS");
					cout<<"\nReporte recorrido por conductor.";
					
					for(int c=0; c<n; c++)//Motsrar los kms por cada conductor
					{
						cout<<"Codigo del conductor: "<<codigo[c]<<endl;
						
						for(f=0; f<7; f++)
						{
							cout<<"Día "<<f+1<<": "<<kms[f][c]<<endl;
						}
						
						cout<<"Total recorrido: "<<total_kms[c];
						cout<<"\n\n\n";
					}
					
					system("PAUSE");
					
					
				}break;	//cerrar caso 2
			
			case 4:
				{
					system("CLS");
					cout<<"Estadisticas\n\n";
					
					cout<<"A.\n";
					
					for(f=0; f<7; f++)//KMs por dia
					{
						dia=0;
						for(c=0; c<n; c++)
						{
							dia+=kms[f][c];
						}
						
						cout<<"\n\nKms en el dia "<<f+1<<" "<<dia<<endl;
					}
					
					cout<<"\nB.";
					
					cout<<"El conductor con mayor KMs recorridos es "<<cmayorkr<<" Con "<<mayorkr<<" KMs"<<endl;
					cout<<"El conductor con menor Kms recorridos es "<<cmenorkr<<" con "<<menorkr<<" KMs"<<endl;
					
					cout<<"\nC.";
					
					cout<<"\nEl día con mayor recorrido fue el día "<<mayordd<<" por el conductor "<<mayorcd<< " con "<<mayorkd<<" kms"<<endl;
					
					cout<<"\nD.";
					
					cout<<"El porcentaje de conductores por debajo del promedio de kms recorridos es: "<<porcentaje<<"%"<<endl;
					
					system("PAUSE");
					
				}break;//cerrar caso 4
			
			case 5:
				{
					Run=0;
				}
				
		}//cerrar switch
		
	}//salir del while
	
	
	return 0;
	
}
