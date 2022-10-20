#include <cstdlib>
#include <iostream>
#include <stack>

using namespace std;
int main(int argc, char * argv[])
{
	stack<int> x;
	int opc, s, n;
	
	do
	{
		cout<<" "<< endl;
		cout<<" Juam Daniel Orta de los Santos "<< endl;
		cout<<" ---------- Pilas --------- "<< endl;
		cout<<" Seleccione una opcion  "<<endl;
        cout<<"1.- Inseertar Elemento "<<endl;
        cout<<"2.- Eliminar Elemento"<<endl;
        cout<<"3.- Mostrar Elemento en la Cima "<<endl;
        cout<<"4.- Mostrar pila "<< endl;
        cout<<"5.- Salir "<< endl;
        cout<<" "<< endl;
        cin>>opc;
    
    switch (opc)
	{
		case 1:system ("cls");
			cout<<"  ------ Inseertar Elemento ------ "<<endl;
   		 	cout<<"Ingresel numero a la pila:  ";
   		 	cin>>n;
   		 	x.push(n);
   		 	
   		 
			 break;
	 
	 	case 2: system ("cls");
	 		cout<<" ----- Eliminar Elemento -----"<<endl;
	 		if(x.empty())
	 		{
	 			cout<<" La pila esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 			cout<<"Se elimino de la pila: "<<x.top()<<endl;
	 			x.pop();
			 }
	 		
	 		break;
	 		
	 	case 3:system ("cls");
	 		cout<<"  ------ Mostrar Elemento en la Cima ------ "<<endl;
			if(x.empty())
	 		{
	 			cout<<" La pila esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 			cout<<"Lacima de la pila es: "<<x.top()<<endl;
	 			
			 }
				
   		    
			 break;
			 
			 
		case 4:system ("cls");
			cout<<"  ------ Mostrar Pila ------ "<<endl;
   		 	if(x.empty())
	 		{
	 			cout<<" La pila esta vacia "<< endl;
	 			system("pause");
			 }
	 		else
	 		{
	 			cout<<"Elementos de la pila: "<<endl;
       			while(! x.empty())
      			 {
      	     	 cout<< x.top() <<" ";
      	     	 x.pop();
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
