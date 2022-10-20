#include <cstdlib>
#include <iostream>
#include "Fibonacci.h"

using namespace std;

int main (int argc, char * arg[])
{
	int n,w;
	int opc;
	
	Fibonacci F;
	
	do
	{
	cout<<"  Juan Daniel Orta de los Santos "<<endl;
	cout<<"       SECUENCIA FIBONACCI "<<endl;
	cout<<" "<<endl;
	cout<<"  Seleccione la opcion que desee"<<endl;
	cout<<" 1 - Fibonacci Recurciva"<<endl;
	cout<<" 2 - Fibonacci Iterativa"<<endl;
	cin>>opc;
	
	switch (opc)
	{
		
	case 1:system ("cls");
		cout<<"  Suceccion Fimonacci de manera recursiva "<<endl;
		do
		{
		cout<<"   Ingresa el numero de sucecion:  "<< endl;
		cin>>n;
		if(n<=0)
		{
		cout<<"  Los valores deven ser mayores a 0  "<<endl;}
		}while(n<=0);
		F.fibonacciR(n);
		F.visualizarR(n);
		break;
    case 2: system("cls");
		cout<<"  Suceccion Fimonacci de manera iterativa  "<<endl;
		do
		{
		cout<<"   Ingresa el numero de sucecion  "<< endl;
		cin>>n;
		if(n<=0)
		{
		cout<<"  Los valores deven ser mayores a 0  "<<endl;
		}
		}while(n<=0);
		F.visualizar(n);
		break;
		default:
		cout<<"No existe la opcion "<<endl;
	}
	} while (w<=3);
   
    
   getchar();
   system("pause");
   return 0;
}
