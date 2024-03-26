#include <stdio.h>

int main()
{
char vogal;

printf ("digite uma letra: \n");
scanf("%c", &vogal);
switch (vogal)
{
case 'a':
printf ("é vogal");
break;

case 'e':
printf ("é vogal");
break;

case 'i':
printf ("é vogal");
break;

case 'o':
printf ("é vogal");
break;

case 'u':
printf ("é vogal");

break;

default:
printf("é uma consoante");
break;
}

}
