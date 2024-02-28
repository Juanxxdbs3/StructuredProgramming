/* Un sistema de ecuaciones lineales del tipo: ax + by = c, dx + ey = f se puede
resolver con las siguientes formulas:

x=ce-bf/ae-bd  y  y= af-cd/ae-bd
Elabore un programa en C++ que resuelva el sistema de ecuaciones.
Nota: asuma que ae - bd es diferente de cero. */

#include<iostream>

using namespace std;

int main(){
	
	float  a,x,b,y,c,d,e,f;
	
	printf("Ingrese a: "); scanf("%f", &a);
	printf("Ingrese b: "); scanf("%f", &b);
	printf("Ingrese e: "); scanf("%f", &e);
	printf("Ingrese d: "); scanf("%f", &d);
	printf("Ingrese f: "); scanf("%f", &d);
	printf("Ingrese c: "); scanf("%f", &c);
	
	x=((c*e)-(b*f))/((a*e)-(b*d));
	y=((a*f)-(c*d))/((a*e)-(b*d));
	
	printf("x es igual a: %.2f\n",x);
	printf("Y es igual a : %.2f\n",y);
	
	return 0;
}
