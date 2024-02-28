/*Escribe un programa en c++ que calcule el valor de la función 'y', para un valor de x
cualquiera*/

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
	
	double y1,y2,y3,y4,y5,y,x;
	
	cout<<"Ingrese el valor de x a calcular: "; cin>>x;
	
	y1= 3*(x);
	y2= (x*(x*(2/3)))/pow(x,2)-1;
	y3= pow(x,2);
	y4= x*x*x;
	y4= (y3+y4);
	y4*=35;
	y5= y4/pow(x,2) +1;
	
	y= y1 + y2 + y5;	
	
	cout<<"\nEL valor de y es: "<<y<<endl;
	
	getch();
	return 0;
	
	
}
