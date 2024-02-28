/* Existen números que leídos de izquierda a derecha y de derecha a izquierda tienen el 
mismo valor. Ejemplo: 404, 1045401. Elabore un programa en C++ que
lea un número 
entero de cinco cifras y averigüe si tiene la característica aquí mencionada.*/
#include<iostream>
using namespace std;

int main(){
  
  long num, num2;
  int dm, m, c, d, u, aux;
  
  //validamos la entrada de un numero de 5 cifras
  do{
      cout<<"Ingrese un numero de 5 cifras: "; cin>>num;
      
      if(num>99999 || num<10000)
         {cout<<"Error: numero invalido.\n";} 
  }while(num>99999 || num<10000);
  
  
  u= num%10; //sacamos la unidad del número
  aux=num/10; //convertimos el numero de 5 cifras a uno de 4
  d= aux%10; //decenas
  aux/=10;   //numero de 3 cifras
  c= aux%10; //centenas
  aux/=10;   //numero de 2 cifras 
  m= aux%10; //millares
  aux/=10;   //numero unidad
  dm= aux;//decenas de mil(?)
  
  num2= ((u*10000)+(d*1000)+(c*100)+(m*10)+ dm);
  
  if(num==num2)//Verificamos si el numero al revés es igual al normal
      cout<<num<<" Es un numero capicua"<<endl;
  else
      cout<<num<<" No es un numero capicua"<<endl;
 
   return 0;
}
