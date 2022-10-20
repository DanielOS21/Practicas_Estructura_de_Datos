#include <cstdlib>
#include <iostream>

using namespace std;
class Rectangulo

{private:
	float base, altura, area ,perimetro;
	
	public:
		Rectangulo ()
		{
			altura=0; base=0; area=0; perimetro=0;
		}
		void visualizar();
		void calcularArea();
		void calcularPerimetro();
		void setAltura(float a);
		void setBase(float b);
};


void Rectangulo::visualizar()
{
	cout<< "Calcula el area y perimetro de un Rectangulo"<<endl;
	cout<< "Base : "<< base<<endl;
	cout<< "Altura : "<< altura <<endl;
	cout<< "Area: "<< area << endl;
	cout<< "Perimetro : "<< perimetro <<endl;
	
}

void Rectangulo::setAltura(float a)
{
	altura = a;
}

void Rectangulo::setBase(float b)
{
	base = b;
}
void Rectangulo::calcularArea()
{
	area = altura * base;
}

void Rectangulo::calcularPerimetro()
{
	perimetro = (altura+base)*2;
} 
