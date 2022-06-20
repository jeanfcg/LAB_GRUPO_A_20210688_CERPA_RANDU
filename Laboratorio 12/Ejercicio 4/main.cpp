#include "Cola.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	Nodo *Mujer = new Nodo();
	Nodo *Hombre = new Nodo();
	int n, edad;
	cout<<"ingrese la cantidad de hombres: ", cin>>n;
	for(int i=0;i<n;i++){
		cout<<"edad del hombre "<<i+1<<": ", cin>>edad;
		Hombre->agregar(edad);
	}
	cout<<"ingrese la cantidad de mujeres: ", cin>>n;
	for(int i=0;i<n;i++){
		cout<<"edad de la mujer "<<i+1<<": ", cin>>edad;
		Mujer->agregar(edad);
	}
	
	Hombre->Mayor_menor(Hombre,Mujer);
	
	getch();
	return 0;
}
