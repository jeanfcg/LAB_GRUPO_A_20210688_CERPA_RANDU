#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

struct Jugador{
	string nombre;
	int edad;
	float talla;
};

void mostrar_jugadores(Jugador *jugador, int n){
	for(int i=0;i<n;i++){
		if(jugador[i].edad < 20 && jugador[i].talla>1.71){
			cout<<"\nresultados: "<<endl;
			cout<<"el jugador "<<jugador[i].nombre<<" tiene "<<jugador[i].edad<<" años, con una altura de "<<jugador[i].talla<<endl;
		}
	}
}
	int main(){
		int n, age;
		float _talla;
		string name;
		cout<<"ingrese el numero de jugadores: ";cin>>n;
		Jugador *jugador = new Jugador[n];
		cin.ignore();
		
		for(int i=0;i<n;i++){
			cout<<"\nnombre: ";getline(cin,name);
			jugador[i].nombre = name;
			cout<<"edad: ";cin>>age;
			jugador[i].edad = age;
			cout<<"talla (metros): ";cin>>_talla;
			jugador[i].talla = _talla;
			
			cin.ignore();
		}
		
		
		mostrar_jugadores(jugador,n);
		
		getch();
		return 0;
	}
