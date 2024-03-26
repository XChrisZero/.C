#include <stdio.h>
#include <math.h>


int main()
{
    int raiz;
    printf("Digite um numero: \n");
    scanf("%d", &raiz );
    
    switch(raiz % 2 )
    {
       
       case 0: 
       printf("%f", sqrt(raiz));
       break;
       
       default:
       printf("Numero Invalido! \n");
       break;
       
       
    }
    
    
    
}
