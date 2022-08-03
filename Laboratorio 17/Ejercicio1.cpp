#include <iostream>
#include <conio.h>

using namespace std;

template <class TIPOD>
void multiplicacion(TIPOD num1, TIPOD num2, TIPOD result);

template <class TIPOD>
void suma(TIPOD num1, TIPOD num2, TIPOD result);

template <class TIPOD>
void resta(TIPOD num1, TIPOD num2, TIPOD result);

template <class TIPOD>
void division(TIPOD num1, TIPOD num2, TIPOD result);


int main() {
	
	int opc;
	float n1,n2,res=0;
	
	cout<<"INGRESANDO LOS DATOS PARA LA CALCULADORA"<<endl;
	cout<<"\ningrese un numero: ", cin>>n1;
	cout<<"ingrese el otro numero: ", cin>>n2;
	
	cout<<"\n\t--MENU DE LA CALCULADORA--"<<endl;
	cout<<"1. sumar "<<endl;
	cout<<"2. restar "<<endl;
	cout<<"3. multiplicar "<<endl;
	cout<<"4. dividir "<<endl;
	cout<<"5. salir "<<endl;
	
	cout<<"\nseleccione una opción: ", cin>>opc;
	
	switch(opc){
	case 1: suma(n1,n2,res); break;
	case 2: resta(n1,n2,res); break;
	case 3: multiplicacion(n1,n2,res); break;
	case 4: division(n1,n2,res); break;
	case 5: cout<<"\n GRACIAS POR SU TIEMPO!!"; break;
	default: cout<<"\nDEBE ESCOGER OTRA OPCION!!"; break;
	}
	
	getch();
	return 0;
}

template <class TIPOD>
	
void suma(TIPOD num1, TIPOD num2, TIPOD result){
	
	result = num1 + num2;
	cout<<"\nel resultado es: "<<result<<endl;
	
}
	
template <class TIPOD>	
void multiplicacion(TIPOD num1, TIPOD num2, TIPOD result){
	
	result = num1 * num2;
	
	cout<<"\nel resultado es: "<<result<<endl;
	
}

template <class TIPOD>
		
void resta(TIPOD num1, TIPOD num2, TIPOD result){
	
	result = num1 - num2;
	cout<<"\nel resultado es: "<<result<<endl;
	
}	

template <class TIPOD>
		
	void division(TIPOD num1, TIPOD num2, TIPOD result){
		
	result = num1 / num2;
	cout<<"\nel resultado es: "<<result<<endl;
	
}	
	
