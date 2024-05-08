#include <stdio.h>

int main()      {
    int list[] = {0, 1, 2, 3, 4}; /* criação de uma lista */
    int cont; 
    
    printf ( "Arrays ordenado ");
    
    for (cont = 0; cont < 5; cont++)       { /* no laço de repetição FOR, sempre declarar a varialvel, uma condição para ela e um contador*/ 
     printf ( "%i ", list[cont]); } /*a variavel de controle 'cont' dentro da lista 'list' é para atribuir a posição do valor dentro da 'list'*/

    printf ( "\n\n");
    printf ( "Arrays invertido ");
    
    for (cont = 4; cont >= 0; cont--)       {
     printf ( "%i ", list[cont]); }

    return 0;   }
   

