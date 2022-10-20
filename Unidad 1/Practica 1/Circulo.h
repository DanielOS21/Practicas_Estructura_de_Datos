#include <cstdlib>
#include <iostream>

using namespace std;
class Circulo

{private:
	float radio, area ,perimetro;
	
	public:
		Circulo ()
		{
			radio=0; area=0; perimetro=0;
		}
		void visualizar();
		void calcularArea();
		void calcularPerimetro();
		void setRadio(float r);
};


void Circulo::visualizar()
{
	cout<< "Calcula el area y perimetro de un Rectangulo"<<endl;
	cout<< "radio : "<< radio<<endl;
	cout<< "Area: "<< area << endl;
	cout<< "Perimetro : "<< perimetro <<endl;
	
}

void Circulo::setRadio(float r)
{
	radio = r;
}

void Circulo::calcularArea()
{
	area = 3.1416*(radio*radio) ;
}

void Circulo::calcularPerimetro()
{
	perimetro =( 3.1416*(radio*radio))*2;
}
