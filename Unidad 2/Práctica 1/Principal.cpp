#include "Potencia.h"
#include <cstdlib>
#include <iostream>

using namespace std;
int main (int argc, char * arg[])
{
	Potencia P;
	int  p, opc, b, n, s;
	
	do
	{
		cout<<" "<< endl;
		cout<<"    RECURSIVIDAD  "<< endl;
		cout<<" Seleccione una opcion  "<<endl;
        cout<<"1.- Forma Iterativa"<<endl;
        cout<<"2.- Forma recursiva"<<endl;
        cout<<"3.- salir "<<endl;
        cout<<" "<< endl;
        cin>>opc;
    
    switch (opc)
	{
		case 1:system ("cls");
			cout<<"Forma Iterativa"<<endl;
   		 	cout<<"Ingrese el numero base:  ";
   		 	cin>>b;
   		 	cout<<"Ingresa la potencia: ";
	 		cin>>n;
   		    P.potenciaIterativa(b,n);
   		    P.visualizarI();
			 break;
	 
	 	case 2: system ("cls");
	 		cout<<"Forma recursiva"<<endl;
	 		cout<<"Ingrese el numero base:  ";
	 		cin>>b;
	 		cout<<"Ingresa la potencia: ";
	 		cin>>n;
	 		
	 		P.calcularPotencia(b,n);
			P.visualizar();
			
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
