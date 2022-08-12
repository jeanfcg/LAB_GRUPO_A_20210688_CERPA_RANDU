#include "iostream"
#include "vector"
#include "ctime"
#include <conio.h>


using namespace std;

class Find{
private:
	vector<int> datos;        
public:
	void anhadirElementos(int aux){
		datos.push_back(aux);
	}
		
		void imprimirDatos(){
			for(int i=0; i<datos.size();i++)
				cout<<datos[i]<<" ";        
			cout<<endl;
		}
			vector<float> operator()(int inicio, int final, int dato){            
				vector<float> aux;
				for (int i = inicio; i < final; i++){
					if(datos[i]==dato)
						aux.push_back(i);
				}     
				return aux;
			}
			
			
};
int main(){
	int n =3;
	int inicio = 0;
	int final = 10;
	Find array;
	
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		array.anhadirElementos(1+rand()%+10);    
	
	cout<<"los datos del array son: \n\t";
	array.imprimirDatos();
	cout<<endl;
	
	//Utilizar funtores
	vector<float> datos = array(inicio,final,n);
	cout<<"buscar el numero "<<n<<" desde la posicion "<<inicio<<" hasta la posicion "<<final-1<<endl;
	if(datos.size()>0){
		cout<<"posiciones donde se ecuentra coincidencia con el numero " <<n<<": \n\t";
		for(int i=0; i<datos.size();i++)
			cout<<datos[i]<<" ";    
		cout<<endl;
	}else
	   cout<<"no se encontraron coincidencias con el numero "<<n<<endl;
	
	
	getch();
	return 0;
	
}
