#include <stdio.h>
#include <stdbool.h>  /*biblioteca booleana foi incluida pq */
int main()
{
    bool controle = false; /**/
    int n1;
    
    while(controle == false) /* esse while(enquanto) ==false é pq*/
    {
        printf("Digite um numero entre 1 e 10: ");
        scanf("%i", &n1);
        
        if (n1 >= 1 && n1 <= 10) /* && representa E, and. */
        {
            int contador;  /* */
            while(contador <= 10)  /* ira rodar até 10 vezes*/
            {
                printf("%i X %i = %i \n", n1, contador, n1 * contador);  /* */
                contador++;  /*a atribuição ++ foi feita aqui para o while(enquanto) adicionar 1 a cada vez q rodar*/
                controle = true;  /* */
            }
            
        }
        else
        {
            printf("Numero invalido! ");  /*mensagem para quando o usuario digitar um numero errado*/
            
        }
    }
}
