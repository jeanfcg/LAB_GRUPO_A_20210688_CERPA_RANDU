#include <iostream>

using namespace::std;

struct nodo{
	int dato;
	nodo* siguiente;
} *primero;

void insertarNodo();
void eliminarNodo();
void desplegarPila();
void buscarNodo();

int main(){
	int opcion_menu=0;
	do
	{
		cout << endl << "\n 1. Insertar";
		cout << endl << " 2. Eliminar";
		cout << endl << " 3. Desplegar";
		cout << endl << " 4. Buscar";
		cout << endl << " 5. Salir";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion_menu;
		switch(opcion_menu ){
		case 1:
			cout << endl << endl << " INSERTA NODO EN LA PILA " << endl << endl;
			insertarNodo();
			break;
		case 2:
			cout << endl << endl << " ELIMINAR UN NODO DE LA PILA " << endl << endl;
			eliminarNodo();
			break;
		case 3: 
			cout << endl << endl << " DESPLEGAR PILA DE NODOS " << endl << endl;
			desplegarPila();
			break;
		case 4:
			cout << endl << endl << " BUSCAR UN NODO EN LA PILA " << endl << endl;
			buscarNodo();
			break;
		case 5:
			cout << endl << endl << " Programa finalizado..." << endl << endl;
			break;
		default:
			cout << endl << endl << " Opcion No Valida " << endl << endl;
		}
	} while (opcion_menu != 5);
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
		
				void eliminarNodo(){
					nodo* actual = new nodo();
					actual = primero;
					nodo* anterior = new nodo();
					anterior = NULL;
					int nodoBuscado = 0;
					bool encontrado = false;
					cout << " Ingrese el dato del Nodo a Buscar para Eliminar: ";
					cin >> nodoBuscado;
					if(primero!=NULL){
						while(actual!=NULL && encontrado != true){
							
							if(actual->dato == nodoBuscado){
								cout << endl << " Nodo con el dato ( " << nodoBuscado << " ) Encontrado";
								
								if(actual == primero){
									primero = primero->siguiente;
								}else{
									anterior->siguiente = actual->siguiente;
								}
								cout << endl << " Nodo Eliminado" << endl << endl;
								encontrado = true;
							}
							anterior = actual;
							actual = actual->siguiente;
						}
						if(encontrado==false){
							cout << endl << " Nodo no Encontrado" << endl << endl;
						}
					}else{
						cout << endl << " La Pila se encuentra vacia" << endl << endl;
					}	
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
						
						void buscarNodo(){
							nodo* actual = new nodo();
							actual = primero;
							int nodoBuscado = 0;
							bool encontrado = false;
							cout << " Ingrese el dato del Nodo a Buscar: ";
							cin >> nodoBuscado;
							if(primero!=NULL){
								while(actual!=NULL && encontrado != true){
									
									if(actual->dato == nodoBuscado){
										cout << endl << " Nodo con el dato ( " << nodoBuscado << " ) Encontrado" << endl << endl;
										encontrado = true;
									}
									
									actual = actual->siguiente;
								}
								if(encontrado==false){
									cout << endl << " Nodo no Encontrado" << endl << endl;
								}
							}else{
								cout << endl << " La Pila se encuentra vacia" << endl << endl;
							}
						}
							
