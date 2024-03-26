#include <stdio.h>

int main()
{
int num1, num2;
char operacao;

printf ("escolha uma operação + - * / "); /* a operação de char sempre deve ser feita primeiro que as int*/
scanf ("%c", &operacao);

printf ("digite um numero: \n");
scanf ("%d", &num1);

printf ("digite outro numero: \n");
scanf ("%d", &num2);

switch (operacao)
{
case '+': /* o aspas simples na operação ('+') é para o sistemas ler como um texto que foi inserido*/
printf ("resultado: %d",(num1 + num2));
break;

case '-':
printf ("resultado: %d",(num1 - num2));

break;

case '*':
printf ("resultado: %d",(num1 * num2));
break;

case '/':
printf ("resultado: %d",(num1 / num2));
break;

default:
printf("operação invalida");
break;
}

}
