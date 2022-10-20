#include "ColaLineal.h"
#include <cstdlib>
#include <iostream>

using namespace std;
int main (int argc, char * arg[])
{
	ColaLineal C;
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
        cout<<"3.- Mostrar Elemento en la Cima "<<endl;
        cout<<"4.- Mostrar Cola "<< endl;
        cout<<"5.- Salir "<< endl;
        cout<<" "<< endl;
        cin>>opc;
    
    switch (opc)
	{
		case 1:system ("cls");
			cout<<"  ------ Inseertar Elemento ------ "<<endl;
   		 	cout<<"Ingreseel numero a la cola:  ";
   		 	cin>>x;
   		 	
   		 	if(C.colaLlena())
   		 	{
   		 		cout<<"la cola esta llena no puede ingresar mas elementos"<< endl;
   		 		system("pause");
				}
				else
				{
					C.insertar(x);
				}
   		 
			 break;
	 
	 	case 2: system ("cls");
	 		cout<<" ----- Eliminar Elemento -----"<<endl;
	 		if(C.colaVacia())
	 		{
	 			cout<<" La cola esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 			x=C.quitar();
	 			cout<<"Se elimino: "<< x <<endl;
			 }
	 		
	 		break;
	 		
	 	case 3:system ("cls");
	 		cout<<"  ------ Mostrar Elemento en la Cima ------ "<<endl;
			if(C.colaVacia())
	 		{
	 			cout<<" La cola esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 			x=C.frenteCola();
	 			cout<<"El frente es: "<< x <<endl;
			 }
				
   		    
			 break;
			 
			 
		case 4:system ("cls");
			cout<<"  ------ Mostrar Cola ------ "<<endl;
   		 	if(C.colaVacia())
	 		{
	 			cout<<" La cola esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 			cout<<"Elementos de la cola: ";
       			while(!C.colaVacia())
      			 {
      	     	 x=C.quitar();
         	  	 cout<<x<<" ";
      			 }
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
