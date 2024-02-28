/* En una librería se calcula el precio de los libros de acuerdo con el tipo de libro y el
número de páginas del mismo, de la siguiente manera:
Los libros de tipo 1 tienen un precio básico de $10.000 más $50 por página.
Los libros de tipo 2 tienen un precio básico de $15.000 más $70 por página.
Los libros de tipo 3 tienen un precio básico de $20.000 más $90 por página.
Los demás libros tienen un precio básico de $25.000 más $120 por página.
Elabore un programa en C++ que permita calcular el precio de cada uno de los libros de la
librería y el valor total del inventario. Por cada libro se tiene el código, el tipo de libro y el número de páginas, pero no se sabe cuántos libros hay en total.
*/

#include<iostream>
#include<locale.h>
using namespace std;

int main()
{

	setlocale(LC_ALL,"spanish");
 int flag=1, cont=1, flag2=1;
 int tipo;
 long precio, total, inv;
 long pag, i;
 int v[]={};
 int a[]={};
 int l=0;

 cout<<"\t--->>>Calcula tu inventario de libros<<<---\n";
 
 while(flag==1)
 {
   
   flag2=1;
    cout<<"Ingrese el código del libro "<<cont<<": "; cin>>i;
    v[l]=i;

      cout<<"Ingrese el tipo de libro(1,2,3 ó 4): ";    cin>>tipo;
      
      do
      {
      	cout<<"¿Cuántas páginas tiene su libro?: "; cin>>pag;
      	
      	if(pag<0)
      	cout<<"ERROR: páginas inválidas";
	  }while(pag<0);
      
    switch(tipo)
    {
        case 1: 
          {      
            precio=10000;
            total= precio+(pag*50);  
          }break;

        case 2:
        {
          precio=15000;
          total=precio+(pag*70); 
        }break;

        case 3:
        {
          precio=20000;
          total=precio+(pag*90); 
        }break;

        case 4:
        {
          precio=25000;
          total=precio+(pag*120); 
        }break;
    
		default:
		{
			cout<<"ERROR: tipo de libro inválido.\n";
			flag2=0;
		}break;
	}
	if(flag2)
	{
		a[l]=total;
    	inv+=total;
    	cont++;
    	l++;
	}
	
	
    cout<<"\n¿Desea comprar otro libro?\n1.Digite uno para si\t2.Digite dos para no\nOpción: ";
    cin>>flag;
    system("CLS");
    
 }	
 	for(int i=0; i<l; i++)
 	{	
 		cout<<"\nCódigo del libro: "<<v[i];
 		cout<<"\nPrecio del libro: "<<a[i]<<endl;
 		cout<<"____________________________________\n";
	}
 
 	cout<<"\nEl costo del inventario es: "<<inv<<endl;
	return 0;
	system("PAUSE") ;
}
