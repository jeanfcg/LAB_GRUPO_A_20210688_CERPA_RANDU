#include <iostream>
#include <conio.h>

using namespace std;

template<int a>
struct sucesionFib {
	
	enum{
		
		value = sucesionFib<a-1>::value + sucesionFib<a-2>::value
	};
};

template <>
struct sucesionFib<1>
{
	
	enum{ value = 1 };
};

template <>
struct sucesionFib<0>
{
	
	enum{ value = 0 };
};

int main()
{
	
	cout<<"el numero fibonacci de esa posicion es"<<endl;
	cout<<sucesionFib<12>::value;
	
	getch();
	return 0;
}
