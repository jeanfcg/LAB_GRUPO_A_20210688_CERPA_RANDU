#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

struct Empresa{
	string nombre;
	string sexo;
	float sueldo;
};

void mostrar_empleados(Empresa *&empleado, int n){
	cout<<"\t--------------------------"<<endl;
	int pos;
	Empresa *aux= new Empresa[1];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(empleado[j].sueldo>empleado[j+1].sueldo){
				aux[0].nombre = empleado[j].nombre;
				aux[0].sueldo = empleado[j].sueldo;
				aux[0].sexo = empleado[j].sexo;
				empleado[j].nombre = empleado[j+1].nombre;
				empleado[j].sueldo = empleado[j+1].sueldo;
				empleado[j].sexo = empleado[j+1].sexo;
				empleado[j+1].nombre = aux[0].nombre;
				empleado[j+1].sueldo = aux[0].sueldo;
				empleado[j+1].sexo = aux[0].sexo;
			}
		}
	}
}
	int main(){
		int n;
		float _sueldo;
		string name,_sexo;
		cout<<"ingrese el numero de empleados: ";cin>>n;
		Empresa *empleado = new Empresa[n];
		cin.ignore();
		
		for(int i=0;i<n;i++){
			
			cout<<"\nNombre: ";getline(cin,name);
			empleado[i].nombre = name;
			fflush(stdin);
			cout<<"sueldo: ";cin>>_sueldo;
			empleado[i].sueldo = _sueldo;
			cin.ignore();
			cout<<"sexo: ";getline(cin,_sexo);
			empleado[i].sexo = _sexo;
			fflush(stdin);
		}
		mostrar_empleados(empleado,n);
		cout<<"\nlista ordenada segun el sueldo de menor a mayor: "<<endl;
		for(int i=0;i<n;i++){
			cout<<"\nnombre: "<<empleado[i].nombre<<endl;
			cout<<"sueldo: "<<empleado[i].sueldo<<endl;
			cout<<"sexo: "<<empleado[i].sexo<<endl;
		}
		
		getch();
		return 0;
	}
