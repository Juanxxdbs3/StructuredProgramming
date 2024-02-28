/*
Elaborar un programa en C++ que lea N ternas de n�meros, por cada terna debe
imprimir el mayor y el menor. Imprima un mensaje especial si por lo menos hay dos
n�meros iguales.
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

  cout<<"--->>>Ternas de n�meros<<<---\n";

  do
  {
    cout<<"�Cuantos n�meros desea c�lcular: ";  cin>>n;
    
    if(n<0)
      {
        cout<<"ERROR: la cantidad no puede ser negativa.\n";
      }
  }while(n<0);
  
  system("CLS");
  
  for(cont=1; cont<=n; cont++)
  {
    cout<<"--->>Revisi�n de Ternas<<---\n";
    do
    {
      cout<<"Ingrese el primer n�mero: "; cin>>n1;
      cout<<"Ingrese el segundo n�mero: ";cin>>n2;
      cout<<"Ingrese el tercer n�mero: "; cin>>n3;

      if(n1<0 || n2<0 || n3<0)
        cout<<"ERROR: n�meros deben ser positivos.\n";
    }while(n1<0 || n2<0 || n3<0);

    if(n1==n2 || n2==n3 || n1==n3)
      {
        cout<<"Hay dos n�mero iguales\n";
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

    cout<<"El mayor n�mero de la terna es: "<<mayor<<endl;
    cout<<"El menor n�mero de la terna es: "<<menor<<endl;
    system("Pause");
    system("CLS");
  }
 
  system("PAUSE");
  return 0;
}
