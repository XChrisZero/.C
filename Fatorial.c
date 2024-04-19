#include <stdio.h>

int main()
{
int num, resultado =1;
    
printf ("digite um numero: ");
scanf ("%i", &num);
    
     while (num >=  1 ) {
        resultado = resultado * num; 
     
     printf ("%i, ",resultado);
        num--;
    }
printf ("\n resultado = %i",resultado);
    return 0;
}
