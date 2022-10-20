#include <cstdlib>
#include <iostream>

using namespace std;
class Cuadrado

{private:
	float base, altura, area ,perimetro;
	
	public:
		Cuadrado ()
		{
			altura=0; base=0; area=0; perimetro=0;
		}
		void visualizar();
		void calcularArea();
		void calcularPerimetro();
		void setAltura(float a);
		void setBase(float b);
};


void Cuadrado::visualizar()
{
	cout<< "Calcula el area y perimetro de un Rectangulo"<<endl;
	cout<< "Base : "<< base<<endl;
	cout<< "Altura : "<< altura <<endl;
	cout<< "Area: "<< area << endl;
	cout<< "Perimetro : "<< perimetro <<endl;
	
}

void Cuadrado::setAltura(float a)
{
	altura = a;
}

void Cuadrado::setBase(float b)
{
	base = b;
}
void Cuadrado::calcularArea()
{
	area = altura + base;
}

void Cuadrado::calcularPerimetro()
{
	perimetro = (altura+base)*2;
}
