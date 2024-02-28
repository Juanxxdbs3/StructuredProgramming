#include <iostream>
#include<locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL,"spanish");
	
	double ingreso, ingt;
	char tipot;
	double ta=0, tb=0, tc=0, tt=0;//contadores
	int dia, flag, ndia=0;
	double desc=0, perd=0, descxd=0;//acumuladores
	double porca=0, porcb=0, porcc=0, mayor=0;
	
	cout<<"\n\n\n\n\n\n\n\t\t     ------->>>PEAJE: LA MESA<<<-------\n\n\n";
	system("PAUSE");
	
	for(dia=1; dia<=30; dia++)
	{
		//Iniciamos variables en 0 para cada iteración
		ingreso=0;
		ingt=0;
		descxd=0;
		flag=1;
		
		system("CLS");
		system("COLOR F0");//Cambia a color blaco y letras negras
		cout<<"\t\t    <<<INGRESE LOS DATOS>>>\n";
		cout<<"\t\nDía: "<<dia<<endl;
		
		do//se valida el ingreso
		{
			cout<<"\nIngrese el dinero entregado: ";	cin>>ingreso;
			
			if(ingreso<0)
			{
				cout<<"ERROR: el ingreso no puede ser negativo.\n";
			}
		}while(ingreso<0);
		
		cout<<"\nIngrese el tipo de tiquete\nA.autos\nB.buses\nC.camiones\nD.Cancelar\n";
		
		while(flag==1)//Bandera que controlará las iteraciones de la cantidad de tiquetes
		{	
			do
			{	
				cout<<"\nOpción: ";	cin>>tipot;
				
				if(!(tipot=='A' || tipot=='B'|| tipot=='C' || tipot=='D'))
				{
					cout<<"Ingrese una letra A, B, C o D en mayúscula.\n";
				}
			}while(!(tipot=='A' || tipot=='B' || tipot=='C' || tipot=='D'));//Validamos el tipo de tiquete
			
			//elegimos el tipo de tiquete
				if(tipot=='A')
				{
					ta+=5000;//esta variable acumula el valor total vendido por tiquete
					ingt+=5000;//se suma a la variable que se compara
					++porca;//Cantidad de tiquetes
				}
			
				if(tipot=='B')
				{
					tb+=7500;
					ingt+=7500;
					++porcb;

				}
			
				if(tipot=='C')
				{
					tc+=18000;
					ingt+=18000;
					++porcc;
				}
			
				if(tipot=='D')
				{
					flag=0;//hacemos "false" la bandera
					--tt;//se resta una cantidad para que al sumarle uno al final no se altere
				}
			
			tt+=1;//acumulamos la cantidad de tiquetes en general
		}
		
		descxd= ingreso- ingt;//comparamos para ver si hubo un descuadre
		cout<<"\n\n************************************************************\n\n";
		if(descxd<0) //Lo identificamos como perdida
		{	
			system("COLOR FC");
			cout<<"EL CIERRE DE CAJA NO FUE EXITOSO."<<endl;
			descxd*=-1;
			cout<<"Hubo un descuadre negativo de: "<<descxd<<"$"<<endl;
			perd+=descxd;
			desc+= descxd;
		}
		else
		if(descxd>0)//Descuadre como ganancia
		{	system("COLOR FC");
			cout<<"EL CIERRE DE CAJA NO FUE EXITOSO."<<endl;
			cout<<"Hubo un descuadre positivo de: "<<descxd<<"$"<<endl;
			desc+= descxd;
		}
		else//no hubo descuadre
		{	system("COLOR FA");
			cout<<"EL CIERRE DE CAJA FUE EXITOSO."<<endl;
			cout<<"Hubo un descuadre de: "<<descxd<<"$\n"<<endl;
		}
		//buscamos el mayor descuadre comparandolo con los demás en cada iteración
		if(descxd>mayor)
		{
			mayor=descxd;
			ndia=dia;
		}
		system("PAUSE");
	}
	//calculo de porcentajes
	porca= (100*porca)/tt;
	porcb= (100*porcb)/tt;
	porcc= (100*porcc)/tt;
	//imprimimos los datos finales
	system("CLS");
	system("COLOR B0");
	cout<<"\t\t     <<<DATOS FINALES>>>\n\n";
	cout<<"\nValor total en el mes de tiquetes \"A\": "<<ta<<"$"<<endl;
	cout<<"Valor total en el mes de tiquetes \"B\": "<<tb<<"$"<<endl;
	cout<<"Valor total en el mes de tiquetes \"C\": "<<tc<<"$"<<endl;
	printf("Porcentaje de ventas tiquetes tipo \"A\": %.2lf%\n",porca);
	printf("Porcentaje de ventas tiquetes tipo \"B\": %.2lf%\n",porcb);
	printf("Porcentaje de ventas tiquetes tipo \"B\": %.2lf%\n",porcc);
	cout<<"______________________________________________________________________________\n";
	cout<<"El día "<<ndia<<" se presentó el mayor descuadre con un valor de: "<<mayor<<"$"<<endl;
	cout<<"El total de descuadre en el mes fue de: "<<desc<<"$"<<endl;
	cout<<"El valor total por pérdidas es de: "<<perd<<"$"<<endl;
	cout<<"______________________________________________________________________________\n";
	
	system("PAUSE");
	return 0;	
}
