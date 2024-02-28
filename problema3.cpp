/* Para un empleado se tienen los siguientes datos:

- nombre del empleado 
- salario basico por hora
- horas ordinarias trabajadas
- horas extras trabajadas

Elabore un programa en c++ que cacule e imprima:

-nombre del empleado
- salario neto a pagar
- valor de la retención en la fuente

teniendo en cuenta que las horas extras tienen un recargo del 40% y la retención en la fuente (10%) se aplica a las horas extras trabajadas.
*/

#include<iostream>

using namespace std;

int main(){
	
	char name[30];
	int horas,horasex;
	double retefuente,salario_bas,salario_neto;
	
	printf("---->>>Bienvenido<<<----\n\n");
	printf("Ingrese el nombre del empleado(Use _ as space): "); scanf("%s", &name);
	printf("Ingrese el salario basico por hora: "); scanf("%lf", &salario_bas);
	printf("Ingrese la cantidad de horas ordinarias trabajadas: "); scanf("%d", &horas);
	printf("Ingrese la cantidad de horas extras trabajadas: "); scanf("%d", &horasex);
	
	retefuente= ((salario_bas*horas)*0.1)+ (((salario_bas*horasex)*1.14)*0.1);
	salario_neto= (salario_bas*horas) +  ((salario_bas*horasex)*1.14) - retefuente;
	
    cout<<"\nEL salario del empleado: "<<name<<" es de: "<<salario_neto<<"\n";
	printf("Y su retencion en la fuente es de: %.2f", retefuente);
	
	return 0;
}
