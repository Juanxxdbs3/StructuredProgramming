/*
Elaborar un programa en C++ que lea N ternas de números, por cada terna debe
imprimir el mayor y el menor. Imprima un mensaje especial si por lo menos hay dos
números iguales.
*/
#include<iostream>
#include<locale.h>
#include <cstdlib>
using namespace std;

int main()
{
  int n, cont;
  int n1, n2, n3;
  int mayor=0, menor=0;

  cout<<"--->>>Ternas de números<<<---\n";

  do
  {
    cout<<"¿Cuantos números desea cálcular: ";  cin>>n;
    
    if(n<0)
      {
        cout<<"ERROR: la cantidad no puede ser negativa.\n";
      }
  }while(n<0);
  
  system("CLS");
  
  for(cont=1; cont<=n; cont++)
  {
    cout<<"--->>Revisión de Ternas<<---\n";
    do
    {
      cout<<"Ingrese el primer número: "; cin>>n1;
      cout<<"Ingrese el segundo número: ";cin>>n2;
      cout<<"Ingrese el tercer número: "; cin>>n3;

      if(n1<0 || n2<0 || n3<0)
        cout<<"ERROR: números deben ser positivos.\n";
    }while(n1<0 || n2<0 || n3<0);

    if(n1==n2 || n2==n3 || n1==n3)
      {
        cout<<"Hay dos número iguales\n";
        continue;
      }
    if(n1>n2 && n1>n3)
    {
      mayor=n1;
      if(n2<n3)
      {
        menor=n2;
      }
      else
      {
        menor=n3;
      }
    }
    else
      if(n2>n1 && n2>n3)
      {
        mayor=n2;
        if(n1<n3)
          {
            menor=n1;
          }
         else
          {
            menor=n3;
          } 
      }
    else
      {
        mayor=n3;
        if(n1<n2)
        {
          menor=n1;
        }
        else
          {
            menor=n2;
          }
      }

    cout<<"El mayor número de la terna es: "<<mayor<<endl;
    cout<<"El menor número de la terna es: "<<menor<<endl;
    system("Pause");
    system("CLS");
  }
 
  system("PAUSE");
  return 0;
}
