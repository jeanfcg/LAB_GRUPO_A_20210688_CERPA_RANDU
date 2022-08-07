#include <iostream>
#include <conio.h>

using namespace std;

template<int a, int b>
struct potenciaValor {
	
	enum{
		
		value = a * potenciaValor<a,b-1>::value
	};
};

template <int a>
struct potenciaValor <a,0>
{
	
	enum{ value = 1 };
};

int main()
{
	
	cout<<"el valor de la potencia es:"<<endl;
	cout<<potenciaValor<4,5>::value;
	
	getch();
	return 0;
}
