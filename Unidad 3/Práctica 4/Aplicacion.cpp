#include <cstdlib>
#include <iostream>
#include <queue>

using namespace std;
int main(int argc, char * argv[])
{
	queue<int> x;
	int opc, s, n;
	
	do
	{
		cout<<" "<< endl;
		cout<<" Juam Daniel Orta de los Santos "<< endl;
		cout<<" ---------- COLAS --------- "<< endl;
		cout<<" Seleccione una opcion  "<<endl;
        cout<<"1.- Inseertar Elemento "<<endl;
        cout<<"2.- Eliminar Elemento"<<endl;
        cout<<"3.- Mostrar Frente "<<endl;
        cout<<"4.- Mostrar Final "<< endl;
        cout<<"5.- Mostrar elementos de la cola  "<< endl;
        cout<<"6.- Salir "<< endl;
        cout<<" "<< endl;
        cin>>opc;
    
    switch (opc)
	{
		case 1:system ("cls");
			cout<<"  ------ Inseertar Elemento ------ "<<endl;
   		 	cout<<"Ingreseel numero a la cola:  ";
   		 	cin>>n;
   		 	x.push(n);
   		 	
   		 
			 break;
	 
	 	case 2: system ("cls");
	 		cout<<" ----- Eliminar Elemento -----"<<endl;
	 		if(x.empty())
	 		{
	 			cout<<" La cola esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 			cout<<"Se elimino de la pila: "<< x.front()<<endl;
	 			x.pop();
			 }
	 		
	 		break;
	 		
	 	case 3:system ("cls");
	 		cout<<"  ------ Mostrar Frente ------ "<<endl;
			if(x.empty())
	 		{
	 			cout<<" La cola esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 			cout<<"el frente de la cola es: " << x.front() << endl;
	 			
			 }
				
   		    
			 break;
			 
			 case 4:system ("cls");
	 		cout<<"  ------ Mostrar Final ------ "<<endl;
			if(x.empty())
	 		{
	 			cout<<" La cola esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 			cout<<"el final de la cola es: " << x.back() << endl;
	 			
			 }
				
   		    
			 break;
			 
		case 5:system ("cls");
			cout<<"  ------ Mostrar elementos de la cola ------ "<<endl;
   		 	if(x.empty())
	 		{
	 			cout<<" La cola esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 			cout<<"Elementos de la cola: "<<x.size()<<endl;
       			while(!x.empty())
      			 {
      	     	 cout<< x.front() << " ";
      	     	 x.pop();
      	     	 
      			 }
			 }
   		 	
			 break;
			
		
	 	case 6:
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
