
/* Un  cajero  electrónico  dispone  de  billetes  de  $20.000,  $10.000,  $5.000,  $2.000  y $1.000. 
Elabore un procedimiento que reciba como dato de entrada el monto de un retiro y que retorne 
(datos de salida) la cantidad de billetes, de cada denominación,  que  se  deben  entregar  al  cliente    
teniendo  en  cuanta  que  el  número  de  billetes  a entregar debe ser el menor posible.

Nota: Asuma que el monto del retiro es múltiplo de 1000.
*/
#include <iostream>
using namespace std;

int cantidad_billetes(long x, long y)
{
	/*int cont=0;
	
	
	while(x>=y)//division por restas sucesivas.
	{
		x-=y;
		cont++;
	}2
	*/
	
	return x/y; 
}

int main()
{
	long monto, billetes=40;//billetes se inicia en cuarenta para que al dividir por primera vez, de 20.
	
	cout<<"\t\t>>>Banco Popular<<<\n\n";
	cout<<"Ingrese el monto a retirar: ";	cin>>monto;	fflush(stdin);
	
	while(monto>0)
	{	
		billetes/=2;//Iremos diviendo el valor billete entre 2 para que se cumpla (20, 10, 5, 2 , 1)
		
		cout<<"La cantidad de billetes de "<<billetes*1000<<" es de: "<<cantidad_billetes(monto,billetes*1000)<<endl;
		monto-=billetes*cantidad_billetes(monto,billetes*1000)*1000;//restamos el valor de los billetes que ya tenemos respecto su cantidad
	}
	
	system("PAUSE");
	return 0;
}
