/* 2.	(Valor 2.5) Una compa��a de seguros para autos ofrece dos tipos de p�liza: cobertura amplia (A) y da�os a terceros (B).  
Para el plan A, la cuota base es de $120.000, y para el B, de $95.000. A ambos planes se les carga 10% del costo si la persona 
que conduce tiene por h�bito beber alcohol, 5% si utiliza lentes, 5% si padece alguna enfermedad como deficiencia cardiaca o diabetes,
 y si tiene m�s de 40 a�os, se le carga 20%, de lo contrario s�lo 10%. Todos estos cargos se realizan sobre el costo base. 

Realice un programa en C/C++ para determinar cu�nto le cuesta a una persona contratar una p�liza*/

#include<locale.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish");
	
	long plan_a= 120000, plan_b=95000;
	float cargo_adicional=0, total=0;
	int lentes,alcohol,enfermedad,edad;
	char plan;
	
	printf("\t--->>Binvendio a Seguros Chimbos<<---");
	printf("\nElija el plan que desea: ");
	printf("\t\n A. Cobertura amplia.\n B. Cobertura est�ndar.");
	printf("\t\nOpcion: "); scanf("%c", &plan);
	fflush(stdin);
	
	system("CLS");
	switch(plan)
	{
		case'A': 
				printf("Plan de Cobetura amplia con valor de: $120.000");
		         printf("\nIntroduzca su edad: "); scanf("%d", &edad); 
		         
					if(edad>40)
					   cargo_adicional+=plan_a*0.2;
					else
					    if(edad>=18 && edad<40)
					         cargo_adicional+=plan_a*0.1;
						else
							{printf("ERROR: edad no valida");
						    return 0;}   
		         printf("\n�Usa usted lentes medicados?: ");
		         printf("\n1. Si\n2.No\n3.Si pero, de puro flow"); 
				 printf("\nOpci�n: "); scanf("%d", &lentes);
		         
		        	if(lentes==1)
		                cargo_adicional+= (plan_a*0.05);
		            else 
						if(lentes==2 || lentes==3)
	                       {}
						else
					   		{printf("ERROR: opci�n no v�lida");
							return 0;}  
		         printf("\n�Cu�ntas veces consume alcohol en la semana?"); 
				 printf("\nOpci�n: "); scanf("%d", &alcohol);
				 	
					if(alcohol>=3)
					   {cargo_adicional+=(plan_a*0.1);}
					else
					   {cargo_adicional=cargo_adicional;}
				 printf("\n�Sufre usted de alguna enfermedad cr�nica?");
				 printf("\n1. Si\n2. No");
				 printf("\nOpci�n: "); scanf("%d", &enfermedad);
				 	
					if(enfermedad==1)
					    cargo_adicional+=(plan_a*0.05);
					else
						if(enfermedad==2)
						  {}
						else
						    printf("ERROR: Enfermedad no v�lida");  
				break;	   
		
		case'B':
				printf("Plan de Da�os a terceros con valor de: $95.000");
		         printf("\nIntroduzca su edad: "); scanf("%d", &edad); 
		         
					if(edad>40)
					   cargo_adicional=plan_b*0.2;
					else 
						if(edad>=18 && edad<40)
					         cargo_adicional=plan_b*0.1;
				    	else
							{printf("ERROR: edad no valida");
							return 0;}   
		         printf("\n�Usa usted lentes medicados?: ");
		         printf("\n1. Si\n2.No\n3.Si pero, de puro flow: "); 
				 printf("\nOpcion: "); scanf("%d", &lentes);
		         
		        	if(lentes==1)
		                cargo_adicional+= (plan_b*0.05);
		            else 
						if(lentes==2 || lentes==3)
					         {}
						else
				    		{printf("ERROR: opci�n no v�lida");
							return 0;  }
		         printf("\n�Cu�ntas veces consume alcohol en la semana?"); 
				 printf("\nOpci�n: "); scanf("%d", &alcohol);
				 	
					if(alcohol>=3)
					   cargo_adicional+=(plan_b*0.1);
					else
					   cargo_adicional=cargo_adicional;
				 printf("\n�Sufre usted de alguna enfermedad cr�nica?");
				 printf("\n1. Si\n2. No");
				 printf("\nOpci�n: "); scanf("%d", &enfermedad);
				 	
					if(enfermedad==1)
					    cargo_adicional+=(plan_b*0.05);
					else
						if(enfermedad==2)
						  {}
						else
						    printf("ERROR: Enfermedad no v�lida");  
		
				break;	
		
		default: printf("ERROR: plan no v�lido\n");
				 system("PAUSE");	
				 break;
	}
	
	system("CLS");
	
	switch(plan)
	{			
				case'A': total= plan_a+cargo_adicional;
						 printf("El valor total de la p�liza es de: %.3f", total);
						 printf("\nEl cargo adicional es de: %.3f", cargo_adicional);
						 printf("\t\n--->>>GRACIAS POR LA COMPRA<<<---");
						 break;
				
				case'B': total= plan_b+cargo_adicional;
						 printf("El valor total de la p�liza es de: %.3f", total);
						 printf("\nEl cargo adicional es de: %.3f", cargo_adicional);
						 printf("\t\n--->>>GRACIAS POR LA COMPRA<<<---");
						 break;
	}
	getch();
	return 0;
}

