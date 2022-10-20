#include "Lista.h"
#include <cstdlib>
#include <iostream>

using namespace std;
int main (int argc, char * arg[])
{
	Lista L;
	int  x;
	int opc, s;
	
	do
	{
		cout<<" "<< endl;
		cout<<"    Juam Daniel Orta de los Santos "<< endl;
		cout<<"           LISTAS   "<< endl;
		cout<<"     Seleccione una opcion  "<<endl;
        cout<<"1.- Insertar elementos a la lista "<<endl;
        cout<<"2.- Mostrar elementos de la lista"<<endl;
        cout<<"3.- Salir "<< endl;
        cout<<" "<< endl;
        cin>>opc;
    
    switch (opc)
	{
		case 1:system ("cls");
			cout<<"  ------ Insertar Elementos ------ "<<endl;
   		 	cout<<"Ingrese el numero a la lista:  ";
   		 	
   		 	L.crearLista();
   		 	cout<<endl;
   		 
			 break;
	 
	 	case 2: system ("cls");
	 		cout<<" ----- Mostrar elementos -----"<<endl;
	 
	 		L.visualizarLista();	
	 	
	 		break;
	 		
			
		
	 	case 3:
			exit (0);
			break;
			
	 	default:system ("cls");
			cout<<"seleccione una opcion valida"<<endl;
			break;
	
	}
	 } while (s=1);
	
 getchar();
   system("pause");
   return 0;
}
