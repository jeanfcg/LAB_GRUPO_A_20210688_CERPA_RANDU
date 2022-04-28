#include <iostream>
#include <stdio.h>

int main()
{
    
    char continuar;
    int n, numero;

    do
    {
        printf( "\n   Introduzca un n%cmero entero: ", 163 );
        scanf( "%d", &numero );

        printf( "\n   La tabla de multiplicar del %d es:\n", numero );


        for ( n = 1 ; n <= 10 ; n++ )
            printf( "\n   %d * %d = %d", n, numero, n * numero );


        printf( "\n\n   %cSi desea terminar presione la letra n ", 168 );
        fflush( stdin );
        scanf( "%c", &continuar );

    } while ( continuar != 'n' );

    return 0;
}