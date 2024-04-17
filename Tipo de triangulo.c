#include <stdio.h>

int main() {
float l1, l2, l3;

    printf ( "Digite um lado do triangulo: \n" );
    scanf ( "%f", &l1 );
    
    printf ( "Digite outro lado do triangulo: \n" );
    scanf ( "%f", &l2 );
    
    printf ( "Digite outro lado do triangulo: \n" );
    scanf ( "%f", &l3 );
    
    if ( l1 == l2 && l1 == l3 && l2 == l3 ) {
       printf ( "Triângulo Equilátero! " ); 
    }
    else if ( l1 == l2 || l1 == l3 || l2 == l3) {
       printf ( "Triângulo Isósceles! " ); 
    }
    else {
       printf ( "Triângulo Escaleno! " );
    }
    
}
