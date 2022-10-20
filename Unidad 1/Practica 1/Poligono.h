#include <cstdlib>
#include <iostream>

using namespace std;
class Poligono

{private:
	float lado, apotema, nlados, area, perimetro;
	
	public:
		Poligono ()
		{
			lado=0; apotema=0; area=0; perimetro=0; nlados=0;
		}
		void visualizar();
		void calcularArea();
		void calcularPerimetro();
		void setLado(float l);
		void setApotema(float ap);
		void setNlados(float n);
};


void Poligono::visualizar()
{
	cout<< "Calcula el area y perimetro de un Rectangulo"<<endl;
	cout<< "Lado : "<< lado<<endl;
	cout<< "Apotema : "<< apotema <<endl;
	cout<< "Numero de Lados: "<< nlados << endl;
	cout<< "Area: "<< area << endl;
	cout<< "Perimetro : "<< perimetro <<endl;
	
}

void Poligono::setLado(float l)
{
	lado = l;
}

void Poligono::setApotema(float ap)
{
	apotema = ap;
}

void Poligono::setNlados(float n)
{
	nlados = n;
}

void Poligono::calcularArea()
{
	area = ((nlados*lado)*apotema)/2;
}

void Poligono::calcularPerimetro()
{
	perimetro = lado*nlados;
}
