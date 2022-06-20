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
            cout<<"\nel elemento "<<n<<" se introdujo en la cola"<<endl;
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
