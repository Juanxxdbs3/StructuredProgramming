/* Elabore un programa en C++ que lea un vector V de N elementos y que luego rote el vector
X posiciones hacia atrás. Por ejemplo si X=2, sería así:
Vector leído: (2, -3, 1, 4, 9, 5, 0, 7)
Vector resultante: (0, 7, 2, -3, 1, 4, 9, 5).*/
#include<iostream>
#include<locale.h>
using namespace std;

int main()
{   
    setlocale(LC_ALL, "spanish");
    int n, x, i, i2, c, m;
    
    cout<<"\t\t\t<<<ROTAR VECTOR>>>\n\n";
    
    do//validamos n y x
    {
        cout<<"\n¿De qué cantidad quiere el vector?: ";   cin>>n;
        cout<<"\n¿Cuántas posiciones quiere rotarlo?: ";  cin>>x;
        
        if(n<=0 || x<0)
        cout<<"ERROR: debe ser una cantidad positiva\n";
        if(x>n)
        cout<<"ERROR: x no puede ser mayor que n\n";
    }while(n<=0 || x<0 || x>n);
    
    float v[n], v2[n];//declaramos vector
    
    for(i=0; i<n; i++)//leemos vector
    {
             printf("Pos[%d]: ", i);    cin>>v[i];
    }
    
    if(x>0)
    {
           cout<<"\nNuevo vector: \n\n";
    
           for(i2=n-x, m=0; i2<n; i2++, m++ )//asiganmos las ultimas x posiciones a un nuevo vector 
              {
               v2[m]= v[i2];
     
               cout<<v2[m]<<" ";
              }
    
           for( int r=0; r<n-x; r++)// imprimimos el vector original hasta n-x
                {
                 cout<<" "<<v[r];
                }
    }//cerrar if
    
    else
    for(int r=0; r<n; r++)
    cout<<v[r]<<" ";
    
    cout<<"\n\n";
    
    system("PAUSE");
    return 0;
}   
