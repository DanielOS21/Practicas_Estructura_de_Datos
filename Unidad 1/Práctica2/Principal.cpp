#include <cstdlib>
#include <iostream>
#include "Operacion.h"

using namespace std;

int main (int argc, char * arg[])
{
	bool repetir = true;
	int N, NumCan,opc;
	

	Operacion Num(N);
	do
	{
	cout<<"  Juan Daniel Orta de los Santos "<<endl;
	cout<<"       Memoria Dinamica "<<endl;
	cout<<" "<<endl;
	cout<<"  Seleccione la opcion que desee"<<endl;
	cout<<" 1 - Iniciar programa"<<endl;
	cout<<" 2 - Salir "<<endl;
	cin>>opc;
	
	switch (opc)
	{
		
	case 1:system ("cls");
		cout<<"  Ingrese los datos del arreglo  "<<endl;
		do
		{
		cout<<"   Ingresa la cantidad de espacios para el arreglo:  "<< endl;
		cin>>N;
		if(N<=0)
		{
		cout<<"  Los valores deven ser mayores a 0  "<<endl;}
					
		else
		{Num.setNumeros(N);}
		
		}
	
		while(N<=0);
	
		cout<<"Imgresa el numero que dece buscar: "<<endl;
		cin>>NumCan;
		if(NumCan>=0)
		
		{
		Num.BuscarNum(NumCan);
		Num.Liberar();}
		
		else
		{cout<<" Los valores deven ser mayores a 0 "<<endl;}
		
		
   		 break;
    
    
    case 2:exit (0);
			break;
		
		default:system ("cls");
		cout<<" Selecione una Opcion Valida"<< endl;
		break;
		
		 }
	
    } while (repetir);
   
    
   getchar();
   system("pause");
   return 0;
}
