/*Elabore un programa en C++ que tomando como base la fecha actual y la fecha de nacimiento 
de una persona (mes, día y año) calcule su edad (la de la persona) en años, en meses y en 
días y diga si la persona es mayor o menor de edad.
dato: 
Enero: 31		
febrero: 28		Julio: 31
marzo: 31		Agosto: 31
abril: 30		Septiembre: 30
Mayo: 31		Octubre: 31
Junio: 30		Noviembre: 30	
				Diciembre: 31*/
#include<iostream>
#include<locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish");
	int mi,di,ai;
	int ma, da, aa;
	int edm, edi, eda, auxd=0, flag=0, op=1;
	
	
	cout<<"\t--->>>CÁLCULA LA EDAD<<<---"<<endl;
	while(op==1)
	{
	do
	{
		cout<<"\n\nIntroduzca la fecha actual(mm dd aaaa): ";		cin>>ma>>da>>aa;
		
		if(ma<=0 || ma>12)
		{
			if(da<=0 || da>31)
			{
				if(aa<=0)
					{cout<<"ERROR: Fechas no válidas.";}
				else
					{cout<<"ERROR: mes y día  no válido.";}
			}
			else
				if(aa<=0)
					{cout<<"ERROR: año y mes no válido.";}
			else
				cout<<"ERROR: mes no válido";
		}
		else
			if(da<=0 || da>31)
			{
				if(aa<=0)
					{cout<<"ERROR: día y año no válidos.";}
				else
					{cout<<"ERROR: día no válido.";}	
			}
		else
			if(aa<=0)
				cout<<"ERROR: año no válido";	
	}while(ma<=0 || da<=0 || aa<=0 || da>31 || ma>12);
	
	do
	{
		cout<<"\n\nIntroduzca la fecha de nacimiento(mm dd aaaa): ";		cin>>mi>>di>>ai;
		
		if(ai>aa)
			cout<<"ERROR: el año de nacimiento no puede ser superior al año actual.";
		else 
			if(ai==aa)
			{
				if(mi==ma)
				{
					if(di>da)
					{cout<<"ERROR: el día de nacimiento no puede ser mayor al actual.";}
				}
				else
					if(mi>ma)
						{cout<<"ERROR: el mes de nacimiento no puede ser mayor al actual.";
						flag=1;}
			}
		if(mi<=0 || mi>12)
		{
			if(di<=0 || di>31)
			{
				if(ai<=0)
					{cout<<"ERROR: Fechas no válidas.";}
				else
					{cout<<"ERROR: mes y día  no válido.";}
			}
			else
				if(ai<=0)
					{cout<<"ERROR: año y mes no válido.";}
			else
				cout<<"ERROR: mes no válido";
		}
		else
			if(di<=0 || di>31)
			{
				if(ai<=0)
					{cout<<"ERROR: día y año no válidos.";}
				else
					{cout<<"ERROR: día no válido.";}	
			}
		else
			if(ai<=0)
				cout<<"ERROR: año no válido";	
				
	}while(mi<=0 || di<=0 || ai<=0 || flag==1 || ai>aa);

	
	switch(ma)
		{
			case 1: auxd=31;	break;
			case 2: auxd=31;	break;
			case 3: {
						if(aa%2==0)
							{auxd=29;}
						else
							{auxd=28;}	
								break;
					}
			case 4: auxd=31;	break;
			case 5: auxd=30;	break;
			case 6: auxd=31; 	break;
			case 7: auxd=30;	break;
			case 8: auxd=31;	break;
			case 9:	auxd=31;	break;
			case 10:auxd=30;	break;
			case 11: auxd=31;	break;
			case 12: auxd=30;	break;
		}
		
	if(da<di)
		{
			eda= (da+auxd)-di;
			ma--;
		}
	else
			eda= da-di;
			
	if(ma<mi)
		{
			edm= (ma+12)-mi;
			aa--;
		}
	else
			edm= ma-mi;
		
	edi= aa-ai;
	
	if(edi>0 && eda>0 && edm>0)
	{
	
	cout<<"\nLa persona tiene "<<edi<<" años, "<<edm<<" meses y "<<eda<<" días"<<endl;
	
	if(edi>=18)
		cout<<"La persona es mayor de edad."<<endl;
	else
		cout<<"La persona no es mayor de edad."<<endl;	
	
	cout<<"\n¿Desea cálcular de nuevo la edad?\n1. Si\t2.No\nOpción: ";	cin>>op;
	}}
	return 0;
}
