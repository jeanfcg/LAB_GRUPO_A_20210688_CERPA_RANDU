/* Escriba un código que solicite una cantidad de minutos específica y muestre como
resultado la hora y fecha resultante tomando como referencia la hora y fecha actual y
restarle el tiempo indicado */

#include<iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
	
	int min;
	
    cout<<"Cantidad de minutos: "; cin>>min;
    time_t t=time(nullptr);
    tm tm=*localtime(&t);
    
    cout<<"Hora actual: "<<put_time(&tm, "%c %Z")<<endl;
    tm.tm_min -= min;
    mktime(&tm);
    cout<<"La fecha y hora hace "<<min<<" minutos fue: "<<put_time(&tm, "%c %Z")<<endl;
    
    return 0;
    
}
