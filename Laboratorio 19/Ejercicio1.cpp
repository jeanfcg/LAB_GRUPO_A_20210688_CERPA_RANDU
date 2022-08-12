#include "iostream"
#include "vector"
#include "ctime"
#include <conio.h>

using namespace std;

class coordinates{
private:
	int x = 0;
	int y = 0;
	int xy = 0;
	int xsquare = 0;
public:
	coordinates(int _x, int _y) : x(_x), y(_y){
		xy = _x*_y;
		xsquare = x*x;
	}
	int getX(){return x;}
	int getY(){return y;}
	int getXY(){return xy;}
	int getXCuadrado(){return xsquare;}
	void print(){
		cout<<"\t"<<x<<"\t"<<y<<endl;
	}
};

class RegresionLinelaSimple{
private:
	vector<coordinates> puntos;
	float suma_xy =0;
	float suma_xcuadrado=0;
	float suma_x=0;
	float suma_y=0;
	int total=0;
public:
	void addElementos(coordinates aux){
		puntos.push_back(aux);
	}
		vector<float> operator()(){
			total = puntos.size();
			vector<float> aux;
			for (int i = 0; i < total; i++){
				suma_xy += puntos[i].getXY();
				suma_xcuadrado+=puntos[i].getXCuadrado();
				suma_x += puntos[i].getX();
				suma_y += puntos[i].getY();
			}
			float m = (total*(suma_xy) - suma_x*suma_y)/ (total*(suma_xcuadrado) - suma_x*suma_x);
			float b = suma_y/total - m*(suma_x/total);
			
			aux.push_back(m);
			aux.push_back(b);
			
			return aux;
		}
};
int main(){
	vector<coordinates> puntos;
	RegresionLinelaSimple regresionLineal;
	
	int n = 8;
	srand(time(NULL));
	cout<<"los datos son generados aleatoriamente"<<endl;
	cout<<"los datos para construir la ecuacion de regresion lineal son:"<<endl;
	cout<<"\tX\tY"<<endl;
	for (int i = 0; i < n; i++){
		coordinates a( 1+rand()%10 ,1+rand()%10);
		a.print();
		regresionLineal.addElementos(a);
	}
	
	vector<float> datos = regresionLineal();
	cout<<"la ecuacion lineal es: \n\ty = "<<datos[0]<<"x + "<<datos[1]<<endl;
	
	getch();
	return 0;
	
}
