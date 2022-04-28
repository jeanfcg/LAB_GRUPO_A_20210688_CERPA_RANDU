#include<iostream>

using namespace std;

int main()
{
	
 int num;
 float x,m=0,media;
 
 cout<<"Cantidad de números: "; cin>>num;
 
 for(int i=0;i<num;i++){
 cout<<"Ingrese los números "<<i+1<<": "; cin>>x;
 m=m+x;
 }
 media=m/num;
 
 cout<<"La media de estos número es: "<<media<<endl;
 return 0;
 
}
