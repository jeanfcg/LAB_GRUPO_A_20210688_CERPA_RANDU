#ifndef COLA_H
#define COLA_H
#include <iostream>

using namespace std;

class Nodo{
private:
	Nodo *sig;
	Nodo *ultimo = NULL;
	Nodo *primero = NULL;
	int dato;
public:
	Nodo(){}
	void agregar(int n){ 
		Nodo *nuevo = new Nodo(); 
		nuevo->dato = n;
		nuevo->sig = NULL;
		
		if(primero==NULL){ 
			primero = nuevo;
		}else{
			ultimo->sig = nuevo; 
		}
		ultimo = nuevo; 
		cout<<"\tel elemento "<<n<<" se introdujo en la cola"<<endl;
	}
		void eliminar(){ 
			Nodo *aux = primero; 
			if(primero == ultimo){ 
				primero = NULL;
				ultimo = NULL;
			}
			else{
				primero = primero->sig; 
			}
			delete aux; 
		}
			void Mayor_menor(Nodo *&hombre, Nodo *&mujer){
				int h=0,m=0, iteraciones;
				cout<<"\ningrese el numero de iteraciones por realizar: ";cin>>iteraciones; 
				for(int i=0;i < iteraciones;i++){
					cout<<hombre->top()<<endl;
					cout<<mujer->top()<<endl;
					if(hombre->top() > mujer->top()){ 
						h++;
						hombre->agregar(hombre->top()); 
						hombre->eliminar();
						mujer->agregar(mujer->top());
						mujer->eliminar();
					}else if(hombre->top() < mujer->top()){ 
						m++;
						hombre->agregar(hombre->top()); 
						hombre->eliminar();
						mujer->agregar(mujer->top());
						mujer->eliminar();
					}
					cout<<endl;
					hombre->mostrar();
					mujer->mostrar();
					cout<<endl;
				}
				cout<<"\nhombres: "<<h<<endl;
				cout<<"mujeres: "<<m<<endl;
				if(h>m){
					cout<<"la edad de los hombres es mayor que las mujeres en "<<iteraciones<<" iteraciones."<<endl;
				}else if(m>h){
					cout<<"la edad de los hombres es menor que las mujeres en "<<iteraciones<<" iteraciones."<<endl;
				}else{
					cout<<"la edad de los hombres y las mujeres es igual en "<<iteraciones<<" iteraciones."<<endl;
				}
			}
				int top(){
					return primero->dato; 
				}
					void mostrar(){ 
						Nodo *aux = new Nodo();
						aux = primero;
						while(aux != NULL){
							cout<<aux->dato<<"->";
							aux = aux->sig;
						}
						cout<<endl;
					}
						
};

#endif
