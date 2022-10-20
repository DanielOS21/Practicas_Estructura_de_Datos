#include <cstdlib>
#include <iostream>
#include <list>

using namespace std;
int main(int argc, char * argv[])
{
	list<int> x;
	int opc, s, n;
	
	do
	{
		cout<<" "<< endl;
		cout<<" Juam Daniel Orta de los Santos "<< endl;
		cout<<" ---------- LISTAS --------- "<< endl;
		cout<<" Seleccione una opcion  "<<endl;
        cout<<"1.- Insertar elementos a la lista por el frente "<<endl;
        cout<<"2.- Insertar elementos a la lista por el final"<<endl;
        cout<<"3.- Mostrar elementos de la lista "<<endl;
        cout<<"4.- Mostrar el elemento al frente "<< endl;
        cout<<"5.- Mostrar elemento al final  "<< endl;
        cout<<"6.- Eliminar un elemento al frente"<< endl;
        cout<<"7.- Eliminar un elemento al final"<< endl;
        cout<<"8.- Eliminar todos los elementos de la lista"<< endl;
        cout<<"9.- Salir "<< endl;
        cout<<" "<< endl;
        cin>>opc;
    
    switch (opc)
	{
		case 1:system ("cls");
			cout<<"  ------ Insertar elementos a la lista por el frente ------ "<<endl;
   		 	cout<<"Ingresa el dato la lista:  ";
   		 	cin>>n;
   		 	x.push_front(n);
   		 	
   		 
			 break;
	 
	 	case 2: system ("cls");
	 		cout<<" ----- Insertar elementos a la lista por el final -----"<<endl;
   		 	cout<<"Ingresa el dato la lista:  ";
   		 	cin>>n;
   		 	x.push_back(n);
	 		
	 		break;
	 		
	 	case 3:system ("cls");
	 		if(x.empty())
	 		{
	 			cout<<" La Lista esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{	
			cout << "------------"<<endl;
			list<int>::iterator it = x.begin();

			cout<<"elementos de la lista "<<endl;
			while(it != x.end())
			{
			cout<<"\t"<< *it++ <<endl;
			}
			
			 }
				  		    
			 break;
			 
		case 4:system ("cls");
	 		cout<<"  ------ Mostrar el elemento al frente ------ "<<endl;
			if(x.empty())
	 		{
	 			cout<<" La lista esta vacia "<< endl;
	 			system("pause");
			}
	 		else
	 		{
	 			cout<<"el elemento al frente es: " << x.front() << endl;
	 			
			}
				
   		    
			 break;
			 
		case 5:system ("cls");
			cout<<"  ------ Mostrar elemento al final ------ "<<endl;
			if(x.empty())
	 		{
	 			cout<<" La lista esta vacia "<< endl;
	 			system("pause");
			}
	 		else
	 		{
	 			cout<<"el elemento al final es: " << x.back() << endl;
	 			
			}
   		 	
			 break;
			 
		case 6: system ("cls");
			 cout<<"  ------ Eliminar un elemento al frente ------ "<<endl;
			 if(x.empty())
	 		{
	 			cout<<" La lista esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 			cout<<"Se elimino de la lista: "<< x.front()<<endl;
	 			x.pop_front();
			 }
			 
	 		
	 		break;
	 		
		case 7: system ("cls");
	 		cout<<"  ------ Eliminar un elemento al final ------ "<<endl;
	 		 if(x.empty())
	 		{
	 			cout<<" La lista esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 			cout<<"Se elimino de la lista: "<< x.back()<<endl;
	 			x.pop_back();
			 }
	 		
	 		break;
	 		
	 	case 8: system ("cls");
	 		cout<<"  ------ Eliminar todos los elementos de la lista ------ "<<endl;
	 		if(x.empty())
	 		{
	 			cout<<" La lista esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 			cout<<"Se eliminaron de la lista "<< x.size()<<" Elementos"<<endl;
			list<int>::iterator it = x.begin();
			while(it != x.end())
			{
			cout<<"\t"<< *it++ <<endl;
			}
	 			x.clear();
			 }
	 		
	 		break;
			
		
	 	case 9:
			exit (0);
			break;
			
	 	default:system ("cls");
			cout<<"seleccione una opcion valida"<<endl;
			break;
	
	}
	 } while (s=1);
	

   system("pause");
   return 0;
}
