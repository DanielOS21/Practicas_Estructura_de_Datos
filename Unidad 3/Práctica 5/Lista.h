#include <iostream>
#include "Nodo.h"
using namespace std;

class Lista
{
    private:
    
        Nodo* primero;
        
    public:
        //Método constructor
        Lista()
        {
                primero=NULL;
        }
        void crearLista();
        void insertarLista(int entrada);
        void visualizarLista();
        
};
void Lista::crearLista()
{
 int x, n;
     primero=0;
     cout<<"cuanos datos decea agregar : ";
     cin>>n;
     for(int i=1; i<=n; i++)
 {
 	cout<<endl;
     
          cin>>x;
          if(x<=0)
          {
          	cout<<"Los datos deven ser mayores a 0 "<<endl;
          	system("pause");
		  }
		  else
          {
          primero=new Nodo(x,primero);
           }
     
 }
     
}
void Lista::insertarLista(int entrada)
{
    Nodo* nuevo;
    
    if(entrada!=-1)
    {nuevo=new Nodo(entrada);
    nuevo->ponerEnlace(primero);//enlaza nuevo con primero
    primero=nuevo; //mueve primero y apunta al nuevo nodo
    }
}
void Lista::visualizarLista()
{
    Nodo* n;
    
    n=primero;
      while(n!=NULL)
      { 
         cout<<n->DatoNodo()<<" ";
         n=n->enlaceNodo();    
      }
}
