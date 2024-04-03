#include <stdio.h>

int main()
{
   int idade, cont, dmaior; /* idade para registrar as idades, cont para ser o contador de while(enquanto), e dmaior para registrar os maiores de idade*/
    cont = 0;
    
    while (cont < 5 ) {
    printf("digite a idade: ");
    scanf("%d", &idade);
    cont++; /* ++ para atribuir 1 a cada vez que o while(enquanto) for rodado*/
    
        if(idade >= 18){
            dmaior++; /* para ler cada vez que um for maior de idade e com isso no final dizer quantos são maiores de idade*/
        }
    }
    
    printf(" %i São maiores de idade! \n ", dmaior); 
}
