#include <iostream>
#include <conio.h>

using namespace std;

void Jugada(int disco, int torre1, int torre2, int torre3){
	if(disco==1){
		cout<<"\t Mover disco de la torre "<<torre1<<" hacia la torre "<<torre3<<endl;
	}
	else{
		Jugada(disco-1, torre1, torre3, torre2);
		cout<<"\t Mover disco de la torre "<<torre1<<" hacia la torre "<<torre3<<endl;
		Jugada(disco-1, torre2, torre1, torre3);
	}
}
	
	
int main() {
		
	char res;
	do{
		int Torre1 = 1, Torre2 = 2, Torre3 = 3, Disco = 0;
		cout<<"ingrese el numero de discos: ", cin>>Disco;
		Jugada(Disco, Torre1, Torre2, Torre3);
		cout<<"¿desea ingresar otra cantidad de discos?", cin>>res;
	}
	while(res == 'S');
		
		getch();
		return 0;
	}
	
