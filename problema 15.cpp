/*Elabore un programa en C++ que tomando como base la fecha actual y la fecha de
nacimiento de una persona (mes, día y año) calcule su edad (la de la persona) en años,
en meses y en días.*/

#include<iostream>

using namespace std;

int main()
{
	
	int ma,da,aa, me, de, ae, dias, meses, anos;
	
	cout<<"Ingrese la fecha actual (MM DD AAAA): "; cin>>ma>>da>>aa;
	cout<<"Ingrese la fecha de nacimiento: (MM DD AAAA): "; cin>>me>>de>>ae;

    
   
		      
    {if(da<de)
       {dias= (da+30)-de;
       --ma;}
    else 
       {dias= da-de;}
}
	
	{if(ma<me)
	   {meses= (ma+12)-me;
	    --anos;}
	else
	   {meses=ma-me;}
		       
	}
	
	 {if(ma<me)
    
      {anos= aa-ae;
      anos--;}
    
	else
      if(ma>= me && da<de)
	      {anos=aa-ae;
		  anos--;}
	
    else
	   {anos=aa-ae;}
 } 
	cout<<"La edad de la persona es: "<<anos<<" anos "<<meses<<" Meses "<<" y "<<dias<<" Dias"<<endl;
	
	return 0;
}
