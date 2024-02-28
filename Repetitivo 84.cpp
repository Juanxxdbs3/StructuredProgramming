#include<iostream>
using namespace std;

int main()
{
	float v, va, vt;
	float m,ma, mt;
	
	cout<<"Ingrese la velocidad (v): "; cin >> v;
	vt = v;
	va  = v*10;
	ma = 0;
	mt = 100;
	
	while(ma<mt)
	{
		ma+= va;
		cout<<"distancia de aquiles: "<<ma<<endl;
		
		mt+=vt;
		cout<<"Distancia de tortuga: "<<mt<<endl;
	}
	
	system("PAUSE");
	return 0;
}
