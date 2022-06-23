#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

struct Cumpleanios{
	string nombre;
	int anio;
	int mes;
	int dia;
};

void mostrar_cumple(Cumpleanios *cumple, int n){
	int mes_actual;
	
	time_t now = time(0);
	
	tm *ltm = localtime(&now);
	mes_actual = 1+ltm->tm_mon;
	
	for(int i=0;i<n;i++){
		if(cumple[i].mes == mes_actual){
			cout<<"\n"<<cumple[i].nombre<<" cumple años este mes!!";
		}
	}
}
	int main(){
		time_t tSac = time(NULL);
		int n, Anio, Mes, Dia,band_2=1, _anio,_mes,_dia;
		struct tm* pt1 = localtime(&tSac);
		_dia = pt1->tm_mday;
		_mes = pt1->tm_mon+1;
		_anio = pt1->tm_year+1900;
		
		string name;
		cout<<"ingrese el numero de personas: ";cin>>n;
		Cumpleanios *cumple = new Cumpleanios[n];
		
		cin.ignore();
		for(int i=0;i<n;i++){
			cout<<"\nnombre: ";getline(cin,name);
			cumple[i].nombre = name;
			do{
				int band=1;
				cout<<"fecha de cumpleaños "<<endl;
				cout<<"dia: ";cin>>Dia;
				cout<<"mes: ";cin>>Mes;
				cout<<"año: ";cin>>Anio;
				if(_anio<Anio){
					cout<<"el año de nacimiento ingresado es mayor al actual, ingrese un año valido"<<endl;
					band=0;
				}
				if(Mes<0 or Mes>12){
					cout<<"el mes ingresado no existe"<<endl;
					band=0;
				}else{
					for(int i=1;i<13;i++){
						if(i%2==0){
							if(i==2){
								if(Anio%4==0){
									if(Dia<0 or Dia>29){
										cout<<"en un año bisiesto el dia "<<Dia<<" no existe."<<endl;
										band=0;
									}
								}else{
									if(Dia<0 or Dia>29){
										cout<<"en un año no bisiesto el dia "<<Dia<<" no existe."<<endl;
										band=0;
									}
								}
							}else{
								if(Dia<0 or Dia>30){
									cout<<"el dia "<<Dia<<" no existe."<<endl;
									band=0;
								}
							}
						}else{
							if(Dia<0 or Dia>31){
								cout<<"el dia "<<Dia<<" no existe."<<endl;
								band=0;
							}
						}
					}
				}
				
				if(band==1){
					band_2 = 0;
				}
			}while(band_2==1);
			
			fflush(stdin);
			cumple[i].dia = Dia;
			cumple[i].mes = Mes;
			cumple[i].anio = Anio;
		}
		
		for(int i=0;i<n;i++){
			cout<<"\nmostrando..."<<endl;
			cout<<"nombre: "<<cumple[i].nombre<<endl;
			cout<<"fecha: "<<cumple[i].dia<<"/"<<cumple[i].mes<<"/"<<cumple[i].anio<<endl;
		}
		mostrar_cumple(cumple,n);
		
		getch();
		return 0;
	}
