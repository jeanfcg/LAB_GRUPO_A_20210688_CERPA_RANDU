#include <iostream>
#include <vector>
#include <algorithm>
#include "ctime"
#include <conio.h>

using namespace std;

class Elementos{
private:
	int a;
	int b;
public:
	Elementos(){}
	Elementos(int _a, int _b){
		a = _a;
		b = _b;
	}  
		int getA(){return a;}
		int getB(){return b;}
		bool operator() (Elementos i,Elementos j) { return (i.getA() < j.getB());}  
};


int main(){
	vector<Elementos> list;
	Elementos comparador;
	int n=20;
	
	srand(time(NULL));
	for (int i = 0; i < n; i++){
		Elementos aux( 1+rand()%10, 1+rand()%10);
		list.push_back(aux);
	}
	
	cout<<"los elementos antes del sort son:"<<endl;
	for(int i=0; i<list.size();i++){
		cout<<"\t"<<list[i].getA()<<" "<<list[i].getB()<<endl;
	}
	cout<<"\nlos elementos despues del sort son"<<endl;
	sort(list.begin(),list.end(),comparador);
	for(int i=0; i<list.size();i++){
		cout<<"\t"<<list[i].getA()<<" "<<list[i].getB()<<endl;
	}
	
	getch();
}
