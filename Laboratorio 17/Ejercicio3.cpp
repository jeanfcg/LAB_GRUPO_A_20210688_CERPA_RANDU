#include <iostream>

template <class T>
class Contenedor {
	T elemento;
	public :
	Contenedor (T arg ) {
		elemento = arg ;
	}
	T add() { return ++elemento;}
};

template <>
class Contenedor<char> {
	char elemento;
	public:
	Contenedor ( char arg ) {
		elemento = arg ;
	}
	char uppercase() {
	if ((elemento >= 'a') && (elemento <='z')) {
		elemento += 'B'-'a';}
	return elemento ;
	}
};

int main(){
	Contenedor<int> cint (15) ;
	Contenedor<char> cchar('j');
	std::cout << cint.add() << std::endl;
	std::cout << cchar.uppercase() << std::endl;
	return 0;
}
