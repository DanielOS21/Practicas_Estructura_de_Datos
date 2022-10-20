#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Fibonacci
{
	private:
	int n, fib,aux;
	public:
		Fibonacci()
		{n; fib=0;fib=0;aux=1;
		}
		
		int fibonacciR(int n);
		void fibonacciI(int n);
		void visualizarR(int n);
		void visualizar(int n);
	
		
};

void Fibonacci::fibonacciI(int n)
{
	if(n > 0) {
    for(int a = 1;a <= n; a++) {
      cout << "[" << fib << "] ";
      aux += fib; 
       fib = aux - fib;
    }
  } 
}

int Fibonacci::fibonacciR(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}
	return fibonacciR(n-2) + fibonacciR(n-1);
}

void Fibonacci::visualizarR(int n)
{
	for (int i=1; i<=n; i++)
	{
		cout<<i<<"="<<fibonacciR(i)<<endl;
	}
}
void Fibonacci::visualizar(int n)
{
	for (int a=1; a<=n; a++)
	{
		cout<<a<<"="<<fibonacciR(a)<<endl;
	}
}


