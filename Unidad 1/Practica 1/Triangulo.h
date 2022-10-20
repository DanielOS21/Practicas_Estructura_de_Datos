#include <math.h>
#include <cstdlib>
#include <iostream>

using namespace std;
class Triangulo

{private:
	float lado1, lado2, lado3, sem, area ,perimetro;
	
	public:
		Triangulo ()
		{
			sem=0; lado1=0;  lado2=0; lado3=0; area=0; perimetro=0;
		}
		void visualizar();
		void calcularArea();
		void calcularPerimetro();
		void setLado1(float l1);
		void setLado2(float l2);
		void setLado3(float l3);
};


void Triangulo::visualizar()
{
	cout<< "Calcula el area y perimetro de un Rectangulo"<<endl;
	cout<< "Lado 1 : "<< lado1 <<endl;
	cout<< "Lado 2 : "<< lado2 <<endl;
	cout<< "Lado 3 : "<< lado3 <<endl;
	cout<< "Area: "<< area << endl;
	cout<< "Perimetro : "<< perimetro <<endl;
	
}


void Triangulo::setLado1(float l1)
{
	lado1 = l1;
}

void Triangulo::setLado2(float l2)
{
	lado2 = l2;
}

void Triangulo::setLado3(float l3)
{
	lado3 = l3;
}

void Triangulo::calcularArea()
{
	sem = ((lado1+lado2+lado3)/2);
	area =sqrt(sem*(sem-lado1)*(sem-lado2)*(sem-lado3));
}

void Triangulo::calcularPerimetro()
{
	perimetro = lado1+lado2+lado3;
}
