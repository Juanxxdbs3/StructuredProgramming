/*
  -el comando Sleep(n); sirve para retrasar la ejecución del codigo, n milisegundos.
  
  -el comando srand(time(NULL)); 
  
  genera un numero aleatorio dentro de un intervalo y luego se guarda en una variable asi:

              variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);
  
  -el comando getch(); pausa el programa hasta que el usuario interactue y además no sale "presione una tecla para continuar."
  
  -las librerias necesarias son:
  windows.
  conio.h
  iostream
  time.h
  locale.h
  

*/
#include<iostream>
#include<time.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
using namespace std;

int main()
{
  setlocale(LC_ALL, "spanish");

  int Run=1, jugadas=0, ganador=0, defender, attack;//banderas
  int menu=0, jugador, pc=0, usuario=0;//opciones
  int repetir=0, columnas=0, filas=0,diagonalp, diagonal2, usados, coincidencia=0,  riesgo, ganar;//contadores y acumuladores
  int columna, fila;//asignacion de valores

  while(Run==1)
  {
    int v[3][3]={{0,0,0},{0,0,0},{0,0,0}};

    system("CLS");
    cout<<"\t\t\t********TRES EN RAYA*********";
    cout<<"\n\nElija una opción (1 , 2 , 3 o 4)\n";
    cout<<"1. Nivel Fácil\n";
    cout<<"2. Nivel Experto\n";
    cout<<"3. Instrucciones\n";
    cout<<"4. Salir\nOpción: ";
    cin>>menu;

    switch(menu)
    {
      case 1: //modo fácil
      {
        do
        {
          cout<<"\n¿Quiere ser jugador \"1\" o jugador \"2\"\nOpción: ";// se elije qué jugador empieza primero si el pc o el usuario
          cin>>jugador;

          if(jugador!=1 && jugador!=2)//jugador solo puede ser 1 o 2
          {
            cout<<"ERROR: digite uno(1) o dos(2).\n";
          }
        }while(jugador!=1 && jugador!=2);
        
          
        if(jugador==1)
        {
        	usuario=1;
        	pc=2;
		    }
		
		    else
		  {
			  usuario=2;
			  pc=1;
		  }

        ganador=0;
        jugadas=0;

        system("CLS");//borramos la matriz en cada impresión
        cout<<"\n\n\n";
          for(int f=0; f<3; f++)//irmprimir la matriz
          {
    
            if(f>0)
            cout<<"\t\t\t-----------\n";
            
			cout<<"\t\t\t";
            for(int c=0; c<3; c++)
            {
              cout<<v[f][c]<<" | ";
            }
            cout<<"\n";
          }

        while(jugadas<9 && ganador==0)//bucle que controlará las jugadas de cada jugador
        {
         
          //en esta parte se empezará a elegir los turnos o a quien le toca, asimismo como el ganador y las jugadas.
          if((jugador==pc && ganador==0) || pc==1)
          {
            cout<<"\n\nTurno de la Computadora.\n";

            repetir=0;
            columna=0;
            fila=0; 
            diagonalp=0;
            diagonal2=0;
            usados=0;
            
            do//generar los numeros aleatoriamente
            {
              if(repetir>10)//si en 10 intentos no se generan aleatoriamente, se buscara la primera casilla libre
              {
                break;
              }

              repetir++;

              srand(time(NULL));
              fila= 0 + rand() % (3);

              srand(time(NULL));
              columna= 0 + rand() % (3);

            }while(v[fila][columna]!=0);

            if(repetir>10)//buscar la primera casilla libre
            {
              int f,c;
            for(f=0; f<3; f++)
            {
              for(c=0; c<3; c++)
              {
                if(v[f][c]==0)//si la casilla no está ocupada
                {
                  v[f][c]=pc;
                  break;
                }
              }
              if(v[f][c]==pc)
              {
              	break;
			  }
            }
            }
            
            else
            v[fila][columna]=pc;

            Sleep(500);
            system("CLS");//borramos la matriz en cada impresión
          
            for(int f=0; f<3; f++)//irmprimir la matriz
            {
              
			  if(f>0)
              cout<<"\t\t\t-----------\n";
              
              cout<<"\t\t\t";
              for(int c=0; c<3; c++)
                {
                  cout<<v[f][c]<<" | ";
                }
              cout<<"\n";
            }

            //verificamos si hay algun ganador en está jugada
            for(int f=0; f<3; f++)//verficamos las filas
            {
              filas=0;
              usados=0;
              for(int c=0; c<3; c++)
              {
                if(v[f][c]!=0)//sumamos las casillas de esa fila que estén ocupadas
                {
                  filas+=v[f][c];
                  usados++;
                }
              }
              if(filas==pc*3 && usados==3)//si la suma de la fila correspondiente tiene las tres casillas marcadas por el pc, se activa el gameover
              {
                ganador=1;
              }
            }

            if(ganador!=1)//es innecesario hacer esto en caso de que se encuntre algún ganador en las filas
            {
              for(int c=0; c<3; c++)//Verificamos las columnas
              {
                columnas=0;
                usados=0;
                for(int f=0; f<3; f++)
                {
                  if(v[f][c]!=0)//se suman las casillas de esa columna
                  {
                    columnas+=v[f][c];
                    usados++;
                  }
                }
                if(columnas==pc*3 && usados==3)//si la suma de la columna es igual a número del jugador por 3 se activa ganador.
                {
                  ganador=1;
                }
              }
            }

            if(ganador!=1)//diagonal principal
            {
            	usados=0;
              for(int f=0; f<3; f++)
              {
                for(int c=0; c<3; c++)
                {
                  if(v[f][c]!=0 && f-c==0)
                  {
                    diagonalp+=v[f][c];
                    usados++;
                  }
                }
                if(diagonalp==pc*3 && usados==3)
                {
                  ganador= 1;
                }
              }
            }

            if(ganador!=1)//diagonal secundaria
            {
            	usados=0;
              for(int f=0; f<3; f++)
              {
                for(int c=0; c<3; c++)
                {
                  if(v[f][c]!=0 && f+c==2)//comportamiento de las diagonales secundarias
                  {
                    usados++;
                    diagonal2+=v[f][c];
                  }
                }

                if(diagonal2==pc*3 && usados==3)
                {
                  ganador=1;
                }
              }
            }
            
            jugadas++;
            
            if(ganador!=1)
            jugador=usuario;
          }
        

        if(jugador==usuario && ganador ==0)
        {
          cout<<"\nTurno del usuario.\n";

          repetir=0;
          columnas=0;
          filas=0;
          diagonalp=0;
          diagonal2=0;

          do
          {
            cout<<"\nIngrese la posición donde quiere jugar: ";
            cin>>fila>>columna;

            if(v[fila-1][columna-1]!=0)
            {
              cout<<"ERROR: esa posición está ocupada.\n";
            }

            if(fila>3 || fila<1 || columna<1 || columna>3)
            {
              cout<<"ERROR: los valores deben ser entre 1 y 3.\n";
            }
          }while(v[fila-1][columna-1]!=0 || fila<1 || fila>3 || columna<1 || columna>3);
          
          v[fila-1][columna-1]=usuario;

          system("CLS");//borramos la matriz en cada impresión
          
          for(int f=0; f<3; f++)//irmprimir la matriz
          {
          	
            if(f>0)
            cout<<"\t\t\t-----------\n";
            
            cout<<"\t\t\t";
            for(int c=0; c<3; c++)
            {
              cout<<v[f][c]<<" | ";
            }
            cout<<"\n";
          }

          //se hacen las mismas verificaciones que en la sección anterior.
          for(int f=0; f<3; f++)//filas
            {
              filas=0;
              usados=0;
              for(int c=0; c<3; c++)
              {
                if(v[f][c]!=0)
                {
                  filas+=v[f][c];
                  usados++;
                }
              }
              if(filas==usuario*3 && usados==3)
              {
                ganador=1;
              }
            }

            if(ganador!=1)
            {
              for(int c=0; c<3; c++)
              {
                columnas=0;
                usados=0;
                for(int f=0; f<3; f++)
                {
                  if(v[f][c]!=0)
                  {
                    columnas+=v[f][c];
                    usados++;
                  }
                }
                if(columnas==usuario*3 && usados==3)
                {
                  ganador=1;
                }
              }
            }

            if(ganador!=1)//diagonal principal
            {
            	usados=0;
              for(int f=0; f<3; f++)
              {
                for(int c=0; c<3; c++)
                {
                  if(v[f][c]!=0 && f-c==0)
                  {
                    diagonalp+=v[f][c];
                    usados++;
                  }
                }

                if(diagonalp==usuario*3 && usados==3)
                {
                  ganador=1;
                }
              }
            }

            if(ganador!=1)//diagonal Secundaria
            {
            	usados=0;
              for(int f=0; f<3; f++)
              { 
                for(int c=0; c<3; c++)
                {
                  if(v[f][c]!=0 && f+c==2)
                  {
                    diagonal2+=v[f][c];
                    usados++;
                  }
                }

                if(diagonal2==usuario*3 && usados==3)
                {
                  ganador=1;
                }
              }
            }


            jugadas++;

            if(ganador!=1)
            jugador=pc;
            Sleep(500);
        }

        Sleep(500);
      }

        if(jugadas>=9 && ganador!=1)
        {
          cout<<"\nHubo un empate."<<endl;
          cout<<"\n\nPresione cualquier tecla para volver al menú.";
          getch();


        }

      if(ganador==1)
      {
        cout<<"El jugador "<<jugador<<" ha ganado esta ronda."<<endl;
        cout<<"\n\nPresione cualquier tecla para volver al menú.";
        getch();
      }

    }break;

    case 2: 
    {
      do
      {
        cout<<"\n¿Quiere ser jugador \"1\" o jugador \"2\": "; cin>>jugador;

        if(jugador!=1 && jugador!=2)
        {
          cout<<"ERROR: el jugador "<< jugador << " no existe.\n";
        }
      }while(jugador!=1 && jugador!=2);

      if(jugador==1)
      {
        pc=2;
        usuario=1;
      }

      else
      {
        pc=1;
        usuario=2;
      }

      jugadas=0;
      ganador=0;
      attack=0;
      defender=0;
      riesgo=0;
      repetir=0;
      usados=0;

      system("CLS");//borramos la matriz en cada impresión
          
          for(int f=0; f<3; f++)//irmprimir la matriz
          {
          	
            if(f>0)
            cout<<"\t\t\t-----------\n";
            
            cout<<"\t\t\t";
            for(int c=0; c<3; c++)
            {
              cout<<v[f][c]<<" | ";
            }
            cout<<"\n";
          }

      while(jugadas<9 && ganador==0)//bucle de control de jugadas
      {
        if((jugador==pc && ganador==0) || pc==1)//Turno del PC
        {
        	cout<<"\n Turno de la computadora\n";
         	
          	repetir=0;
            columna=0;
            fila=0; 
            diagonalp=0;
            diagonal2=0;
            usados=0;
            
          //Aquí se está verificando a ver si el usuario tiene oportunidad de ganar en alguna fila o columna o diagonal; o si del mismo modo
          // la pc tiene oportunidad de ganar.
          for(int f=0; f<3; f++)//Verficar en las filas si el usuario o el pc tiene oportunidad de ganar
            {
              riesgo=0;
              defender=0;
              ganar=0;
              attack=0;
              
              for(int c=0; c<3; c++)
              {
                if(v[f][c]==usuario)//si en esa fila hay una jugada del usuario se acumula en una variable
                riesgo+=v[f][c];

                if(v[f][c]==pc)//asimismo para el pc
                ganar+=v[f][c];
              }
                if(ganar==pc*2)
                {
                  for(int col=0; col<3; col++)//buscamos la casilla que falta para poder ganar
                  {
                    if(v[f][col]==0)
                    {
                      columna=col;
                      fila=f;
                      attack=1;
                      break;
                    }
                  }
                }

              else
              if(riesgo==usuario*2 && attack==0)
              {
                for(int col=0; col<3; col++)
                {
                  if(v[f][col]==0)//buscamos una casilla que podamos bloquear
                  {
                    columna=col;
                    fila=f;
                    defender=1;
                    break;    
                  }
                }
              }
        
              if(defender==1 || attack==1)
              break;
            }

            if(defender!=1 && attack!=1)
            {
            for(int c=0; c<3; c++)//verificar si al usuario le falta una casilla en una columna
            {
              riesgo=0;
              defender=0;
              attack=0;
              ganar=0;
              for(int f=0; f<3; f++)
              {
                if(v[f][c]==usuario)
				riesgo+=v[f][c];

                if(v[f][c]==pc)
                ganar+=v[f][c];
              }

              if(ganar==pc*2)
              {
                for(int fil=0; fil<3; fil++)
                {
                  if(v[fil][c]==0)
                  {
                    columna=c;
                    fila=fil;
                    attack=1;
                    break;

                  }
                }
              }

              else
              if(riesgo==usuario*2 && attack==0)
              {
                for(int fil=0; fil<3; fil++)
                {
                  if(v[fil][c]==0)
                  {
                    columna=c;
                    fila=fil;
                    defender=1;
                    break;
                    
                  }
                }
              }

              if(defender==1 || attack==1)
              break;
            }
            }

            if(defender!=1 && attack!=1)
            {
            	riesgo=0;
            	ganar=0;
              for(int f=0; f<3; f++)//diagonal principal
              {
                for(int c=0; c<3; c++)
                {
                  if(v[f][c]==usuario && f-c==0)
                  {
                    riesgo+=v[f][c];
                  }

                  if(v[f][c]==pc && f-c==0)
                  	{
				  		ganar+=v[f][c];
					}
                }

                if(ganar==pc*2)
                {
                  for(int fil=0; fil<3; fil++)
                  {
                    for(int col=0; col<3; col++)
                    {
                      if(v[fil][col]==0 && fil-col==0)
                      {
                        columna=col;
                        fila=fil;
                        attack=1;
                        break;
                      }
                    }
                    
                    if(attack==1)
                    break;
                  }
                }

                else
                if(riesgo==usuario*2 && attack==0)
                {
                  for(int fil=0; fil<3; fil++)
                  {
                    for(int col=0; col<3; col++)
                    {
                      if(v[fil][col]==0 && fil-col==0)
                      {
                        columna=col;
                        fila=fil;
                        defender=1;
                        break;

                      }
                    }
                    if(defender==1)
                    {
                    	break;
					}
                  }
                }

                if(defender==1 || attack==1)
                break;
              }
            } 

            if(defender!=1 && attack!=1)//diagonal secundaria.
            {
            	riesgo=0;
            	ganar=0;
            	
              for(int f=0; f<3; f++)
              {
                for(int c=0; c<3; c++)
                {
                  if(v[f][c]==usuario && f+c==2)
                  {
                    riesgo+=usuario;
                  }

                  if(v[f][c]==pc && f+c==2)
                  {
                    ganar+=pc;
                  }
                }

                if(ganar==pc*2)
                {
                  for(int fil=0; fil<3; fil++)
                  {
                    for(int col=0; col<3; col++)
                    {
                      if(v[fil][col]==0 && fil+col==2)
                      {
                        columna=col;
                        fila=fil;
                        attack=1;
                        break;
                      }
                    }
                    if(attack==1)
                    {
                    	break;
					}
                  }
                }

                else
                if(riesgo==usuario*2 && attack==0)
                {
                  for(int fil=0; fil<3; fil++)
                  {
                    for(int col=0; col<3; col++)
                    {
                      if(v[fil][col]==0 && fil+col==2)
                      {
                        columna=col;
                        fila=fil;
                        defender=1;
                        break;
                      }
                    }

                    if(defender==1)
                    break;
                  }
                }
        
                if(defender==1 || attack==1)
                break;
              }
            }
          
          if(defender!=1 && attack!=1)//Jugar aleaatoriamente
            {
            	do//generar los numeros aleatoriamente
            {
              if(repetir>10)//si en 10 intentos no se generan aleatoriamente, se buscara la primera casilla libre
              {
                break;
              }

              repetir++;

              srand(time(NULL));
              fila= 0 + rand() % (3);

              srand(time(NULL));
              columna= 0 + rand() % (3);

            }while(v[fila][columna]!=0);

            if(repetir>10)//buscar la primera casilla libre
            {
              int f,c;
            for(f=0; f<3; f++)
            {
              for(c=0; c<3; c++)
              {
                if(v[f][c]==0)//si la casilla no está ocupada
                {
                  columna=c;
                  fila=f;
                  break;
                }
              }
              if(columna==c && fila==f)
              {
              	break;
			  }
            }
            }
       		}
            
            v[fila][columna]=pc;
         	
          
          	Sleep(500);
            system("CLS");//borramos la matriz en cada impresión
          
            for(int f=0; f<3; f++)//imprimir la matriz
            {
            	
              if(f>0)
              cout<<"\t\t\t-----------\n";
              
              cout<<"\t\t\t";
              for(int c=0; c<3; c++)
                {
                  cout<<v[f][c]<<" | ";
                }
              cout<<"\n";
            }

          //Verificar si hay algún ganador
          for(int f=0; f<3; f++)//verficamos las filas
            {
              filas=0;
              usados=0;
              for(int c=0; c<3; c++)
              {
                if(v[f][c]!=0)//sumamos las casillas de esa fila que estén ocupadas
                {
                  filas+=v[f][c];
                  usados++;
                }
              }
              if(filas==pc*3 && usados==3)//si la suma de la fila correspondiente tiene las tres casillas marcadas por el pc, se activa el gameover
              {
                ganador=1;
              }
            }

            if(ganador!=1)//es innecesario hacer esto en caso de que se encuntre algún ganador en las filas
            {
              for(int c=0; c<3; c++)//Verificamos las columnas
              {
                columnas=0;
                usados=0;
                for(int f=0; f<3; f++)
                {
                  if(v[f][c]!=0)//se suman las casillas de esa columna
                  {
                    columnas+=v[f][c];
                    usados++;
                  }
                }
                if(columnas==pc*3 && usados==3)//si la suma de la columna es igual a número del jugador por 3 se activa ganador.
                {
                  ganador=1;
                }
              }
            }

            if(ganador!=1)//diagonal principal
            {
            	usados=0;
              for(int f=0; f<3; f++)
              {
                for(int c=0; c<3; c++)
                {
                  if(v[f][c]!=0 && f-c==0)
                  {
                    diagonalp+=v[f][c];
                    usados++;
                  }
                }
                if(diagonalp==pc*3 && usados==3)
                {
                  ganador= 1;
                }
              }
            }

            if(ganador!=1)//diagonal secundaria
            {
            	usados=0;
              for(int f=0; f<3; f++)
              {
                for(int c=0; c<3; c++)
                {
                  if(v[f][c]!=0 && f+c==2)//comportamiento de las diagonales secundarias
                  {
                    usados++;
                    diagonal2+=v[f][c];
                  }
                }

                if(diagonal2==pc*3 && usados==3)
                {
                  ganador=1;
                }
              }
            }
            


          jugadas++;
          if(ganador!=1 && jugadas<9)
          jugador=usuario;
        }

        if(jugador==usuario && ganador ==0)
        {
          cout<<"\nTurno del usuario.\n";

          repetir=0;
          columnas=0;
          filas=0;
          diagonalp=0;
          diagonal2=0;

          do
          {
            cout<<"\nIngrese la posición donde quiere jugar: ";
            cin>>fila>>columna;

            if(v[fila-1][columna-1]!=0)
            {
              cout<<"ERROR: esa posición está ocupada.\n";
            }

            if(fila>3 || fila<1 || columna<1 || columna>3)
            {
              cout<<"ERROR: los valores deben ser entre 1 y 3.\n";
            }
          }while(v[fila-1][columna-1]!=0 || fila<1 || fila>3 || columna<1 || columna>3);
          
          v[fila-1][columna-1]=usuario;

          system("CLS");//borramos la matriz en cada impresión
          
          for(int f=0; f<3; f++)//irmprimir la matriz
          {
          	
            if(f>0)
            cout<<"\t\t\t-----------\n";
            
            cout<<"\t\t\t";
            for(int c=0; c<3; c++)
            {
              cout<<v[f][c]<<" | ";
            }
            cout<<"\n";
          }

          //se hacen las mismas verificaciones que en la sección anterior.
          for(int f=0; f<3; f++)//filas
            {
              filas=0;
              usados=0;
              for(int c=0; c<3; c++)
              {
                if(v[f][c]!=0)
                {
                  filas+=v[f][c];
                  usados++;
                }
              }
              if(filas==usuario*3 && usados==3)
              {
                ganador=1;
              }
            }

            if(ganador!=1)
            {
              for(int c=0; c<3; c++)
              {
                columnas=0;
                usados=0;
                for(int f=0; f<3; f++)
                {
                  if(v[f][c]!=0)
                  {
                    columnas+=v[f][c];
                    usados++;
                  }
                }
                if(columnas==usuario*3 && usados==3)
                {
                  ganador=1;
                }
              }
            }

            if(ganador!=1)//diagonal principal
            {
            	usados=0;
              for(int f=0; f<3; f++)
              {
                for(int c=0; c<3; c++)
                {
                  if(v[f][c]!=0 && f-c==0)
                  {
                    diagonalp+=v[f][c];
                    usados++;
                  }
                }

                if(diagonalp==usuario*3 && usados==3)
                {
                  ganador=1;
                }
              }
            }

            if(ganador!=1)//diagonal Secundaria
            {
            	usados=0;
              for(int f=0; f<3; f++)
              { 
                for(int c=0; c<3; c++)
                {
                  if(v[f][c]!=0 && f+c==2)
                  {
                    diagonal2+=v[f][c];
                    usados++;
                  }
                }

                if(diagonal2==usuario*3 && usados==3)
                {
                  ganador=1;
                }
              }
            }


            jugadas++;

            if(ganador!=1 && jugadas <9)
            jugador=pc;
            Sleep(500);
        }
		
		Sleep(500);
      }

      if(jugadas>=9 && ganador!=1)
        {
          cout<<"\nHubo un empate."<<endl;
          system("PAUSE");


        }

      if(ganador==1)
      {
        cout<<"El jugador "<<jugador<<" ha ganado esta ronda."<<endl;
        system("PAUSE");
      }



    }break;

    case 3:
    {
    	system("CLS");
    
	cout<<"\t\t*****INSTRUCCIONES*****";
	cout<<"\n\n¿EN QUE CONSISTE EL JUEGO?";
	cout<<"\nEl juego consiste en buscar la manera de hacer una linea recta de los elementos con el cual esta jugando.\nla linea puede ser en forma vertical, horizontal o diagonal.";
    cout<<"\n\nPOSICIONES DE LAS CASILLAS: \nnúmero + espacio + número";
	cout<<"\n\n1 1 | 1 2 | 1 3\n_______________\n\n2 1 | 2 2 | 2 3\n_______________\n\n3 1 | 3 2 | 3 3"; 
	
	cout<<"\n\n\n¿COMO JUGAR?";
	cout<<"\n\n1. Poner el número de su jugador(1 o 2) en la posición que desee siempre y cuando esté el número 0.\n2. Se debe buscar realizar una linea de tres elementos consecutivos iguales, ya sea horizontal, vertical o diagonal.";
	cout<<"\nLa partida termina cuando uno de los dos jugadores completa una linea de tres elementos iguales.\n";
	system("pause");
	system("CLS");
	cout<<"\n\n\t\tJUEGO DE TRIKI EN MODO FACIL";
	cout<<"\n\nEn este modo se deberá buscar la casilla mas conveniente para realizar el triki.\n";
	system("pause");
	system("CLS");
	cout<<"\n\n\n\t\tJUEGO DEL TRIKI EN MODO DIFICIL";
	cout<<"\n\nMETODOS PARA GANAR EN MODO DIFICIL: ";
	cout<<"\n\n1. SIENDO EL JUGADOR NÚMERO 1.\nA. Colocar su primera jugada(1) en una esquina, si el contrincante coloca su jugada(2) en en el centro su proxima juagada deberá ser en la esquina opuesta.";
	cout<<"\n\n0 | 0 | 1\n__________\n\n0 | 2 | 0\n__________\n\n1 | 0 | 0";
	cout<<"\n\nSeguido a esto jugar en una de las dos esquinas sobrantes y obtendrás dos casillas posibles para ganar.";
	cout<<"\n\n1 | 0 | 1\n__________\n\n0 | 2 | 0\n__________\n\n1 | 0 | 2";
	
	cout<<"\n\nB. Colocar su primera jugada(1) en una esquina. Si el contrincate no coloca su jugada(2) en el centro,";
	cout<<"\ncolocar su jugada en cualquier otra esquina";
	cout<<"\nexcepto en la que no quede un espacio entre las dos jugadas(1). \nla tercera jugada se coloca en donde se tenga dos opciones para ganar.";
	cout<<"\n\n0 | 0 | 1\n__________\n\n0 | 0 | 0\n__________\n\n1 | 0 | 2"<<"\n\n    o";
	cout<<"\n\n1 | 0 | 1\n__________\n\n0 | 0 | 0\n__________\n\n0 | 0 | 2";
	cout<<endl;
	system("pause");
	system("CLS");
	cout<<"\n\n\n\t\tJUEGO DEL TRIKI EN MODO DIFICIL";
	cout<<"\n\nSIENDO EL JUGADOR NÚMERO 2. \n\nA. Si el contrincante coloca su jugada(1) en una esquina, deberá poner su jugada(2) en el centro.";
	cout<<"\nsu proxima jugada(2) debe estar en el borde a menos que se deba bloquear al contrincante para que no gane.";
	cout<<"\n\n0 | 0 | 1\n__________\n\n0 | 2 | 0\n__________\n\n0 | 0 | 0";
	
	cout<<"\n\nB. Si el contrincante coloca su jugada(1) en el centro, el jugador (2) debe colocar su jugada(2) en una esquina";
	cout<<"\ny debe bloquear las jugadas de su oponente.";
	cout<<"\n\n0 | 0 | 0\n__________\n\n0 | 1 | 0\n__________\n\n0 | 0 | 2";
	
	cout<<"\n\nC. Si el contrincante coloca su jugada(1) en un borde, su jugada(2) debe ir en el centro.";
	cout<<"\n\n0 | 1 | 0\n__________\n\n0 | 2 | 0\n__________\n\n0 | 0 | 0";
	
	cout<<"\n\nSi el contrincante coloca su siguiente jugada(1) en el borde opuesto, su jugada(2) debe ir en la esquina";
	cout<<"\n\n0 | 1 | 2\n__________\n\n0 | 2 | 0\n__________\n\n0 | 1 | 0";
	
	cout<<"\n\nSu siguiente jugada(2) deberá ser en la esquina debajo de la cual hizo su ultima jugada, asi tendrá dos opciones para ganar.";
	cout<<"\n\n0 | 1 | 2\n__________\n\n0 | 2 | 0\n__________\n\n1 | 1 | 2";
	
	
	cout<<"\n\nNOTA: ESTAS INSTRUCCIONES FUERON CREADAS PARA DARLE UNA IDEA CLARA A LOS JUGADORES SOBRE DIFERENTES SITUACIONES";
	cout<<"\nEN LAS QUE SE PUEDE GANAR, PERO HAY MUCHOS CASOS EN LOS QUE SE NECESITA DE OTRAS TECNICAS.\n";
	
	
	system("pause");

    }break;

    case 4:
    {
      Run=0;
    }break;

    }

  }

  return 0;
}
