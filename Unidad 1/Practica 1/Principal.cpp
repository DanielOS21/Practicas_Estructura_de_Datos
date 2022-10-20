#include "Circulo.h"
#include "poligono.h"
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Rectangulo.h"
#include <cstdlib>
#include <iostream>

using namespace std;
int main (int argc, char * arg[])
{
	float area,  perimetro, l1, l2, l3, r, l, ap, n, a, b;
	int opcion;
	
	Cuadrado C;
	Rectangulo R;
	Triangulo T;
	Poligono P;
	Circulo CI;
    do
    {
        cout<<" \t\t************ Programa Para Calcular Area y Perimetro ************\t\n\n";
        cout<<"\t\t\t Seleccione una Opcion \n\n";
		cout<<"\t\t\t1. Cuadrado \n\n";
        cout<<"\t\t\t2. Rectangulo \n\n";
        cout<<"\t\t\t3. Triangulo \n\n";
        cout<<"\t\t\t4. Circulo \n\n";
        cout<<"\t\t\t5. Poligono\n\n";
        cout<<"\t\t\t6. SALIR \n\n";
        cin>>opcion;
        
        switch(opcion)
        {

        case 1:system ("cls");
            cout<<"BIENVENIDO"<<endl;
	cout<<"\t Ingrese Los Datos del Cuadrado "<<endl;
	cout<<"Ingrese la Base:  "<<endl;
	cin>>b;
	cout<<"Ingrese la Altura: "<<endl;
	cin>>a;
	if(b>=0 && a>=0){
		C.setAltura(a);
		C.setBase(b);
		C.calcularArea();
		C.calcularPerimetro();
		C.visualizar();
	}
	else{
		cout<<"Los datos ingresados no pueden ser menores a 0"<<endl;
	}	
		
	
	getchar();
            break;

        case 2:system ("cls");
            cout<<"BIENVENIDO"<<endl;
	cout<<"\t Ingrese los Datos del Rectangulo "<<endl;
	cout<<"Ingrese la Base:  "<<endl;
	cin>>b;
	cout<<"Ingrese la Altura: "<<endl;
	cin>>a;
	
	if(b>=0 && a>=0){
		R.setAltura(a);
		R.setBase(b);
		R.calcularArea();
		R.calcularPerimetro();
		R.visualizar();
	}
	else{
		cout<<"Los datos ingresados no pueden ser menores a 0"<<endl;
	}
		
	
	getchar();
            break;

        case 3:system ("cls");
            cout<<"BIENVENIDO"<<endl;
	cout<<"\t Ingrese los Datos del Triangulo "<<endl;
	cout<<"Ingrese el lado 1: "<<endl;
	cin>>l1;
	cout<<"Ingrese el lado 2: "<<endl;
	cin>>l2;
	cout<<"Ingrese el lado 2: "<<endl;
	cin>>l3;

	if(l1>=0 && l2>=0 && l3>=0 && a>=0){
		T.setLado1(l1);
		T.setLado2(l2);
		T.setLado3(l3);
		T.calcularArea();
		T.calcularPerimetro();
		T.visualizar();
	}
	else{
		cout<<"Los datos ingresados no pueden ser menores a 0"<<endl;
	}	
	
	getchar();
            break;

        case 4:system ("cls");
            cout<<"BIENVENIDO"<<endl;
	cout<<"\t Ingrese los Datos del Circulo "<<endl;
	cout<<"Ingrese el Radio: "<<endl;
	cin>>r;
	
	if(r>=0){
		CI.setRadio(r);
		CI.calcularArea();
		CI.calcularPerimetro();
		CI.visualizar();
	}
	else{
		cout<<"EL radio no puede ser menor a 0"<<endl;
	}
	
		
		
	
	getchar();
            break;

        case 5:system ("cls");
            cout<<"BIENVENIDO"<<endl;
	cout<<"\t Ingrese los Datos del Poligono "<<endl;
	cout<<"Ingrese el Numero de Lados: "<<endl;
	cin>>n;
	cout<<"Ingrese la Medida de uno de sus Lados: "<<endl;
	cin>>l;
	cout<<"Ingrese la Apotema: "<<endl;
	cin>>ap;
	if(n>=3 && l>=0 && ap>=0){
		P.setNlados(n);
		P.setLado(l);
		P.setApotema(ap);
		P.calcularArea();
		P.calcularPerimetro();
		P.visualizar();	
	}
	else{
		cout<<"los valores no pueden ser menores a 0"<<endl;
	}
		
		
	
	getchar();
            break;
            
        default:
            cout<<"\nHa ingresado una opci\242n invalida\n\n";
            break;
        }
    }
    while(opcion!=6);

	
	system("pause");
	return 0;
}
