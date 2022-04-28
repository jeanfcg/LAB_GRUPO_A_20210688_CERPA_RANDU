#include<iostream>
#include <string.h>

using namespace std;

int main()
{
	
	float a, b, c, d, e;
	
	cout<<"Valor de a: "; cin>>a;
	cout<<"Valor de b: "; cin>>b;
	cout<<"Valor de c: "; cin>>c;
	cout<<"Valor de d: "; cin>>d;
	cout<<"Valor de f: "; cin>>e;
	
	cout.precision(4); //no especifica la cantidad de números a redondear
	
	cout<<"\na redondeado es: "<<a<<endl;
	cout<<"\nb redondeado es: "<<b<<endl;
	cout<<"\nc redondeado es: "<<c<<endl;
	cout<<"\nd redondeado es: "<<d<<endl;
	cout<<"\ne redondeado es: "<<e<<endl;
	
	return 0;
	
}