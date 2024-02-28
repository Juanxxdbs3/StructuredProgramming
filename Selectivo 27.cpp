/* Se desea calcular el jornal de un trabajador con base en los siguientes datos:
Código del trabajador.
Salario básico por hora.
Producción mínima diaria.
Producción del día.
El cálculo del jornal se hace de acuerdo con su salario básico por hora, más una bonificación 
del 2%, de su salario básico por hora, por el número de unidades de exceso producidas 
sobre el mínimo que debe producir. Si un trabajador no sobrepasa la producción mínima no
tendrá bonificación.
Nota: En la empresa se laboran 8 horas diarias.*/

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
  
  //variables 
  char codigo[10];
  long bas, min, dia, e;
  float neto, bon;
  
  //pedimos los datos
  cout<<"\t--->>>JORNADA<<<---"<<endl;
  cout<<"Salario basico por hora: ";
  cin>>bas;
  cout<<"Producción mínima requerida por día: ";
  cin>>min;
  
  system("CLS");
  
  cout<<"\t------------------------";
  cout<<"\nCodigo del trabajador: ";
  cin>>codigo;
  cout<<"Produccion del trabajador: ";
  cin>>dia;
  
  e=dia-min;
  bon=((bas*2/100)*e)/min;
 
  if(!(dia>=min))
     {neto=bas*8;
      cout<<"\nNo hay bonificacion"<<endl;}
  else
      neto=bas*8+ bon;
  system("CLS"); 
  cout<<"El pago del trabajador es de: "<<neto<<endl;
  cout<<"La bonificacion es de: "<<bon<<endl;
  
  return 0;
}