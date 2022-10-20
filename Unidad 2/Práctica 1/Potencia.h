#include <iostream>
#include <cstdlib>

using namespace std;
class Potencia

{
	private:
		int p, I;
		
		public:
			Potencia(){p=0;}
			int calcularPotencia(int x, int n);
			int potenciaIterativa(int x, int n);
			void visualizar();
			void visualizarI();
			
};

int Potencia::calcularPotencia(int x, int n)
{
	if(n==0)
	{
	 return 1;
	}
	else
	return p= x*calcularPotencia(x,  n-1);
}

void Potencia::visualizar()
{
	cout<<" la potencia es :  "<< p <<endl;
}
void Potencia::visualizarI()
{
	cout<<"La potencia es: "<<I<<endl;
}
int Potencia::potenciaIterativa(int x, int n)
{
	I=1;
	for (int i=1; i<=n; i++)
	{
		I = I * x;
	}
	return I;
}


