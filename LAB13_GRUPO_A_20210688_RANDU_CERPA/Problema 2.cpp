#include <iostream>
#include <conio.h>

using namespace std;

struct Alumno{
	string nombre;
	char grupo;
	float nota [4];
	
};
void mostrar(Alumno *alumnado,int n){
	float Promedio;
	for(int i=0;i<n;i++){
		Promedio=0;
		cout<<"Nombre: "<<alumnado[i].nombre<<endl;
		cout<<"Grupo: "<<alumnado[i].grupo<<endl;
		
		for(int j=0;j<4;j++){
			Promedio+=alumnado[i].nota[j];
		}
		cout<<"Promedio: "<<Promedio<<endl;
		cout<<endl;
		
	}
}
	int main(){
		
		string _name;
		char _grupo;
		float n1;
		
		int n;
		cout<<"ingrese la cantidad de alumnos: ";cin>>n;
		Alumno *alumnado = new Alumno [n];
		
		cin.ignore();
		for(int i=0;i<n;i++){
			cout<<"\n";
			cout<<"nombre: ";getline(cin,_name);
			alumnado[i].nombre = _name;
			cout<<"Grupo: ";cin>>_grupo;
			alumnado[i].grupo = _grupo;
			cout<<"\nnota primera fase: ";cin>>n1;
			alumnado[i].nota[0]=n1*0.1;
			cout<<"nota segunda fase: ";cin>>n1;
			alumnado[i].nota[1]=n1*0.2;
			cout<<"nota tercera fase: ";cin>>n1;
			alumnado[i].nota[2]=n1*0.3;
			cout<<"nota proyecto final: ";cin>>n1;
			alumnado[i].nota[3]=n1*0.4;
			
			cin.ignore();
			
		}
		
		cout<<"\nlos datos son: "<<endl;
		mostrar(alumnado,n);
		
		getch();
		return 0;
	}
