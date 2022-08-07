#include <iostream>
#include <conio.h>

using namespace std;

template<int a>
struct sumDigitos {
	enum{
		value = a%10 + sumDigitos<a/10>::value
	};
};

template <>
struct sumDigitos <0>
{
	enum{ value = 0 };
};

int main()
{
	cout<<"la suma de los digitos es:"<<endl;
	cout<<sumDigitos<859>::value;
	
	getch();
	return 0;
}
