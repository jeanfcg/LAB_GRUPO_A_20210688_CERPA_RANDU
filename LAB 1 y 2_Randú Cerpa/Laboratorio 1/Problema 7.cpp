/* Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es divisor del otro.*/

#include<iostream>
#include <string.h>

using namespace std;

int main()
{
	
	int mayor, menor;
	
	cout<<"Número mayor: "; cin>>mayor;
	cout<<"Número menor: "; cin>>menor;
	
	if(mayor % menor ==0){
		cout<<menor<<" es divisor de "<<mayor<<endl;
		
	}
	else {
		cout<<menor<<" no es divisor de "<<mayor<<endl;
	}
	
	return 0;
	
}