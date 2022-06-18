#include <iostream>

using namespace::std;

struct nodo{
	int dato;
	nodo* siguiente;
} *primero;

void insertarNodo();
void desplegarPila();

int main(){
	int opcion_menu=0;
	do
	{
		cout << endl << "\n 1. Insertar";
		cout << endl << " 2. Despeglar";
		cout << endl << " 3. Salir";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion_menu;
		switch(opcion_menu ){
		case 1:
			cout << endl << endl << " INSERTA NODO EN LA PILA " << endl << endl;
			insertarNodo();
			break;
		case 2: 
			cout << endl << endl << " DESPLEGAR PILA DE NODOS " << endl << endl;
			desplegarPila();
			break;
		case 3:
			cout << endl << endl << " Programa finalizado..." << endl << endl;
			break;
		default:
			cout << endl << endl << " Opcion No Valida " << endl << endl;
		}
	} while (opcion_menu != 3);
	return 0;
}
	
	void insertarNodo(){
		nodo* nuevo = new nodo();
		cout << " Ingrese el dato que contendra el nuevo Nodo: ";
		cin >> nuevo->dato;
		nuevo->siguiente = primero;
		primero = nuevo;
		cout << endl << " Nodo Ingresado " << endl << endl;
	}
			
			void desplegarPila(){
				nodo* actual = new nodo();
				actual = primero;
				if(primero!=NULL){
					while(actual!=NULL){
						cout << endl << " " << actual->dato; 
						actual = actual->siguiente;
					}
				}else{
					cout << endl << " La Pila se encuentra vacia" << endl << endl;
				}
			}
				
				
