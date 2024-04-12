#include<stdio.h>

int main()
{
float n1, n2, n3;
int contador = 1;

printf (" Digite um numero: \n");
scanf ( "%f",&n1 );

printf (" Digite um numero: \n");
scanf ( "%f",&n2 );

printf (" Digite um numero: \n");
scanf ( "%f",&n3 );

    if(n1 < n2 && n1 < n3){
printf("O numero menor é: %.0f", n1);
}
    else if(n2 < n1 && n2 < n3){
printf("O numero menor é: %.0f", n2);
}
    else {
printf ("O numero menor é: %.0f", n3);
}
}
