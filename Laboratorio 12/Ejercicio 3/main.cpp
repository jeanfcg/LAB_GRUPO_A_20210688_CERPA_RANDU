#include "Cola.h"
#include <iostream>
#include <conio.h>
 
using namespace std;
 
int main(){
    Nodo *Cola = new Nodo();
    int dato,opc;
    do{
        cout<<"\t MENU"<<endl;
        cout<<"1. insertar elementos. "<<endl;
        cout<<"2. mostrar elementos. "<<endl;
        cout<<"3. eleminar elemento."<<endl;
		cout<<"4. buscar elemento."<<endl;
		cout<<"5. salir."<<endl;
        cout<<"\nescoja una opcion: ", cin>>opc;
        
		if(opc==1){
			cout<<"\ningrese el elemento que desea a�adir: ", cin>>dato;
			Cola->agregar(dato);
		}else if(opc==2){
			Cola->mostrar();
		}else if(opc==3){
			Cola->eliminar();
		}else if(opc==4){
			Cola->buscar();
		}else if(opc==5){
			cout<<"Gracias por su tiempo!"<<endl;
			break;
		}else{
			cout<<"opcion no valida"<<endl;
		}
	}while(true);
	
	getch();
	return 0;
}
