#include  "PilaLineal.h"
#include <cstdlib>
#include <iostream>

using namespace std;
int main (int argc, char * arg[])
{
	PilaLineal L;
	int  x;
	int opc, s;
	
	do
	{
		cout<<" "<< endl;
		cout<<" Juam Daniel Orta de los Santos "<< endl;
		cout<<"    COLAS  "<< endl;
		cout<<" Seleccione una opcion  "<<endl;
        cout<<"1.- Inseertar Elemento "<<endl;
        cout<<"2.- Eliminar Elemento"<<endl;
        cout<<"3.- Mostrar Cima "<<endl;
        cout<<"4.- Mostrar Pila "<< endl;
        cout<<"5.- Salir "<< endl;
        cout<<" "<< endl;
        cin>>opc;
    
    switch (opc)
	{
		case 1:system ("cls");
			cout<<"Inserte los elementos de la pila:  ";
   		 	cin>>x;
   		 	
   		 	if(L.pilaLlena())
   		 	{
   		 		cout<<"la Pila esta llena no puede ingresar mas elementos"<< endl;
   		 		system("pause");
				}
				else
				{
					L.insertar(x);
					
				}
   		 
			 break;
	 
	 	case 2: system ("cls");
	 		cout<<" ----- Eliminar Elemento -----"<<endl;
	 		if(L.pilaVacia())
	 		{
	 			cout<<" La Pila esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 		  x=L.quitar();
	 		  cout<<"Se elimino: "<< x <<endl;
			 }
	 		break;
	 		
	 		case 3:system ("cls");
			cout<<"  ------ Mostrar Cima ------ "<<endl;
   		 	if(L.pilaVacia())
	 		{
	 			cout<<" La Pila esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 			x=L.cimaPila();
	 			cout<<"Elemento de la Pila: "<< x <<endl;
			 }
			 
			 break;
			 
	 	case 4:system ("cls");
	 		cout<<"  ------ Mostrar Pila ------ "<<endl;
	 		cout<<"Los elementos de lapila son: " <<endl;
			while(!L.pilaVacia())
			{
			x=L.quitar();
			cout<<" "<< x <<" ";
				
			}
			
			 break;

		
	 	case 5:
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
