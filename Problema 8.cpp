/* Realiza un programa en C++ que calcule el área y el perimetro de una circunferencia y de un triángulo*/

#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
const double PI= 3.1415926535897932384626433832795;

using namespace std;

int main(){
	
	float base, altura, radio,l2,l3;
	double PerC, AreaC, AreaT, PerT;
	cout<<"\tArea y Perimetro de la circunferencia"<<endl;
	printf("\nIngrese el radio de la circunferencia: "); scanf("%f", &radio);
	
	PerC= PI*(2*radio);
	AreaC= 2*pow(radio,2);
	AreaC*=PI;
	
	printf("\nEl area de la circunferencia es: %.2lf", AreaC);
	printf("\nEl Perimetro de la circunferencia es %.2lf", PerC);
	
	getch();
	system("CLS");
	
	printf("\tArea y Perimetro del triangulo");
	printf("\nIngrese la base del triangulo: ");    scanf("%f", &base);
	printf("\nIngrese la altura del triangulo: ");  scanf("%f", &altura);
	printf("\nIngrese un lado del triangulo: ");    scanf("%f", &l2);
	printf("\nIngrese el otro lado: ");             scanf("%f", &l3);
	
	if(base+l2>l3 && base+l3>l2 && l2+l3>base)
	    {AreaT= (base*altura)/2;
	    PerT= base+l2+l3;}
	
	else 
	    {
		cout<<"Las longitudes ingresadas no corresponden a las de un triangulo";
	    return 0;}
		   
	
	printf("\nEl area del triangulo es de: %.2lf", AreaT);
	printf ("\nEl perimetro del triangulo es de: %.2lf", PerT);
	
	getch();
	system("CLS");
	
	printf("\nEl area de la circunferencia es: %.2lf", AreaC);
	printf("\nEl Perimetro de la circunferencia es %.2lf", PerC);
	printf("\nEl area del triangulo es de: %.2lf", AreaT);
	printf ("\nEl perimetro del triangulo es de: %.2lf", PerT);
	
	return 0;
}

