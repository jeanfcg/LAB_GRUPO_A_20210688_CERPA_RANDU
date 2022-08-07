#include <iostream>
#include <conio.h>

using namespace std;

template<int a>
struct Binarioval{
	
	enum 
	{
		
		value = a%2+Binarioval<a/2>::value*10,
	};
};
template <>
struct Binarioval<1>
{
	
	enum{ value = 1};
};
template <>
struct Binarioval<0>
{
	
	enum{ value = 0};
};

int main(){
	
	cout<<"el valor binario es:"<<endl;
	cout<<Binarioval<23>::value;
	
	getch();
	return 0;
}
