#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Llantas{
public:
	int tamanio;
};
class Motor{
public:
	int Poder;
};
class Cuerpo{
public:
	string forma;
	string color;
};
class Asientos{
public:
	int cantidad;
	string color;
};
class Ventanas{
public:
	int cantidad;
	string polarizada;
};
class Car{
public:
	Llantas*   llantas[4];
	Motor*  motor;
	Cuerpo* cuerpo;
	Asientos* asientos;
	Ventanas* ventanas;
	void specifications(){
		cout << "cuerpo: " << cuerpo->forma << " " << cuerpo->color <<endl;
		cout << "fuerza del motor: " << motor->Poder <<endl;
		cout << "tamanio de las ruedas: " << llantas[0]->tamanio << "'" <<endl;
		cout<< "numero y color de los asientos: " << asientos->cantidad<< " asientos "<<asientos->color<<endl;
		cout<<"numero de ventanas y si son o no polarizadas: "<<ventanas->cantidad<< " ventanas "<<ventanas->polarizada<<endl;
	}
};
class Builder{
public:
	virtual Llantas* getLlantas()=0;
	virtual Motor* getMotor()=0;
	virtual Cuerpo* getCuerpo()=0;
	virtual Asientos*getAsientos()=0;
	virtual Ventanas*getVentanas()=0;
};
class Director{
	Builder* builder;
public:
	void setBuilder(Builder* newBuilder){
		builder = newBuilder;
	}
		Car* getCarro(){
			Car* car = new Car();
			car->cuerpo = builder->getCuerpo();
			car->motor = builder->getMotor();
			car->llantas[0] = builder->getLlantas();
			car->llantas[1] = builder->getLlantas();
			car->llantas[2] = builder->getLlantas();
			car->llantas[3] = builder->getLlantas();
			car->asientos=builder->getAsientos();
			car->ventanas=builder->getVentanas();
			return car;
		}
};
class HondaBuilder : public Builder{
public:
	Llantas* getLlantas(){
		Llantas* llanta = new Llantas();
		llanta->tamanio = 22;
		return llanta;
	}
		Motor* getMotor(){
			Motor* motor = new Motor();
			motor->Poder = 400;
			return motor;
		}
			Cuerpo* getCuerpo(){
				Cuerpo* cuerpo = new Cuerpo();
				cuerpo->forma = "Mitsubishi";
				cuerpo->color="negro";
				return cuerpo;
			}
				Asientos* getAsientos(){
					Asientos* asientos=new Asientos();
					asientos->cantidad=8;
					asientos->color=" blanco";
					return asientos;
				}
					Ventanas* getVentanas(){
						Ventanas* ventanas=new Ventanas();
						ventanas->cantidad=4;
						ventanas->polarizada="polarizadas";
						return ventanas;
						
					}
};
class SuzukiBuilder : public Builder{
public:
	Llantas* getLlantas(){
		Llantas* llanta = new Llantas();
		llanta->tamanio = 16;
		return llanta;
	}
		Motor* getMotor(){
			Motor* motor = new Motor();
			motor->Poder = 80;
			return motor;
		}
			Cuerpo* getCuerpo(){
				Cuerpo* cuerpo = new Cuerpo();
				cuerpo->forma = "Coupe";
				cuerpo->color="Marron";
				return cuerpo;
			}
				Asientos* getAsientos(){
					Asientos* asientos=new Asientos();
					asientos->cantidad=3;
					asientos->color="Negros";
					return asientos;
				}
					Ventanas* getVentanas(){
						Ventanas* ventanas=new Ventanas();
						ventanas->cantidad=6;
						ventanas->polarizada="No Polarizadas";
						return ventanas;
					}
};
int main()
{
	Car* car;
	Director director;
	HondaBuilder hondaBuilder;
	SuzukiBuilder susukiBuilder;
	cout << "Toyota" << endl;
	director.setBuilder(&hondaBuilder); 
	car = director.getCarro();
	car->specifications();
	cout << endl;
	cout << "Suzuki" << endl;
	director.setBuilder(&susukiBuilder); 
	car = director.getCarro();
	car->specifications();
	
	getch();
	return 0;
}
