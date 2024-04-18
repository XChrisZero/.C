#include <stdio.h>

int main()
{
    int num, resultado =1;
    printf ("digite um numero: ");
    scanf ("%i", &num);
    
    for ( ; num >= 1 ; num--) {
        resultado = resultado * num; 
        printf ("%i, ",resultado);
    }
printf ("\n resultado = %i",resultado);
    return 0;
}
