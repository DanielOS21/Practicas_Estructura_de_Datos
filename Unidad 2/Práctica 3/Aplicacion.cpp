#include "Serie.h"
#include <cstdlib>
#include <iostream>

using namespace std;


int main (int argc, char * arg[])
{
	
	int n, opc, r=1, r2=1, a;
		
		Serie S(n);
		do
	{
		cout<<" "<< endl;
		cout<<"  JUAN DANIEL ORTA DE LOS SANTOS"<< endl;
		cout<<"    SERIE  "<< endl;
		cout<<" Seleccione una opcion  "<<endl;
        cout<<"1.- Forma Iterativa"<<endl;
        cout<<"2.- Forma recursiva"<<endl;
        cout<<"3.- salir "<<endl;
        cout<<" "<< endl;
        cin>>opc;
    
    switch (opc)
	{
		case 1:system ("cls");
			cout<<" Forma Iterativa"<<endl;
			cout<<"   Ingresa el numero base:  "<< endl;
			cin>>n;
	
				cout<<"  "<<endl; 
			S.serieI(n);
			
			
			
	 		
			 break;
	 
	 	case 2: system ("cls");
	 		cout<<"Forma recursiva"<<endl;
			cout<<"   Ingresa el numero base:  "<< endl;
			cin>>n;
				cout<<" "<<endl; 
			cout<<"R: "<<S.serieR(n)<<endl;
			S.visualizar(n);
	 		
			
			break;
			
	 	case 3:
			exit (0);
			break;
			
	 	default:system ("cls");
			cout<<"seleccione una opcion valida"<<endl;
			break;
	
	}
	 } while (a=1);
	

   system("pause");
   return 0;
}
