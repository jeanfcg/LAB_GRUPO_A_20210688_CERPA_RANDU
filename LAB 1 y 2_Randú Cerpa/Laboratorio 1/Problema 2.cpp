#include<iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	
    char nombre[15];
    char patapellido[15];
    char matapellido[15];
    
    cout<<"Primer nombre: "; cin>>nombre;
    cout<<"Apellido paterno: "; cin>>patapellido;
    cout<<"Apellido materno: "; cin>>matapellido;
    
    cout<<nombre[0]<<patapellido<<matapellido[0]<<"@unsa.edu.pe"<<endl;
    
    return 0;
}