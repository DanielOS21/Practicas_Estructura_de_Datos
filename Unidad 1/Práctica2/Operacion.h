#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Operacion
{
	private:
	int *numeros;
	int cannum,numbus,numencontrar;
	
	public:
	Operacion(int ne) {numbus=0; numencontrar=0; cannum=ne; numeros=new int [ne];}
	void setNumeros(int cannum);
	void BuscarNum(int numbus);
	void Liberar();
		
};

	void Operacion::setNumeros(int cannum)
	{
		cout<<"Escribe los " << cannum << " numeros para agregar al arreglo"<<endl;
		
		for (int i=0; i<cannum; i++)
		{cin>>numeros[i];}
	}	
	
	void Operacion::BuscarNum(int numbus)
	{
		for(int i=0; i<cannum; i++)
		{if(numbus==numeros[i])
		
		{
			numencontrar=1;
			cout<<"El numero que busac es;  " <<"["<<numbus<<"]" << " y se encuentra en la posicion "<< "["<<i+1<<"]" << " del arreglo."<<endl;
			break;
		}
		else
		numencontrar=0;
		}
		
		if (numencontrar==0)
		{
			cout<<" El numero no esta en el arreglo "<<endl;
		}
	}
	
	void Operacion::Liberar()
	{
		delete []numeros;
	}

