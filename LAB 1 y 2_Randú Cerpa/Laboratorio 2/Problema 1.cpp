#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int suma = 0;

    for( int n = 2; n <= 100; n++ )
    {
        if( n % 2 == 0 ) suma += n;
		}

 cout <<"\nLa suma de los numeros pares entre el número 2 y el número 100 es: " << suma <<endl;
     
     return 0;
     
}
