#include <cstdlib>
#include <iostream>
#include <new>

using namespace std;

class Serie
{
		private:
			int n, *As;
			
		public:
			Serie(int num){ n=num; As=new int [num];
			}
			int serieR(int n);
			int serieI(int n);
			void visualizar(int n);
			void Liberar();
	};
	
	int Serie::serieR(int n)
	{
		if(n==1)
		{
			return -3;	
		}
		else
		{
			return serieR(n-1)-11;
		}
	}
	
	int Serie::serieI(int n)
	{
		int s=8;
		for(int i=0;i<n;i++)
		{
			s=s-11;
			As[i]=s;
			cout<<As[i]<<"\t";
		}
	}
	
	void Serie::visualizar(int n)
	{
		for(int i=1;i<=n;i++)
		{
			As[i]=serieR(i);
			cout<<As[i]<<"\t";
		}
	}
	
	
	void Serie::Liberar()
	{
		delete [] As;
}
