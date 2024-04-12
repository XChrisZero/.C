#include <stdio.h>

int main() {
float Celsius, Fahrenheit;

    printf ("Digite uma temperatura em graus Celsius(C):");
    scanf ("%f",&Celsius );

Fahrenheit = Celsius * 9 / 5 + 32;

    printf ("Sua temperatura em Fahrenheit é: %.1f" ,Fahrenheit);
}
