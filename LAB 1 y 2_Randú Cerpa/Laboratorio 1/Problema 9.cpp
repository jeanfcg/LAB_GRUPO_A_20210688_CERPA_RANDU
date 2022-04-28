#include<iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])

{
	int num, acum=0, repe = 1, nump=1;
	while(repe<=10)
	{
		cout<<nump++<<"\nIngrese un número: "; cin>>num;
		if(num<0)
		acum+=num;
		repe++;
		
	}
	cout<<"La suma de solo los números negativos es: "<<acum<<endl;
	
	
	 
	return 0;
	
}

