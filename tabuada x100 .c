#include <stdio.h>
#include <stdbool.h>  /*biblioteca booleana foi incluida */
int main()
{
    bool controle = false; /* quando o controle ter o mesmo valor q false Vai entrar entrar no WHILE*/
    int n1;
    
    while(controle == false) /* esse while(enquanto) ==false é Para ele rodar até ele for verdadeiro, no caso enquanto ele for false ele vai rodar */
    {
        printf("Digite um numero entre 1 e 100: ");
        scanf("%i", &n1);
        
        if (n1 >= 1 && n1 <= 100) /* && representa E and. */
        {
            int contador;  /* para o segundo while contar ate <=100*/
            while(contador <= 10)  /* ira rodar até 10 vezes*/
            {
                printf("%i X %i = %i \n", n1, contador, n1 * contador);  /* tudo depois das aspas é o que está explicando os %i's*/
                contador++;  /*a atribuição ++ foi feita aqui para o while(enquanto) adicionar 1 a cada vez q rodar*/
                controle = true;  /* para encerrar quando o contador <=10 do while de cima */
            }
            
        }
        else
        {
            printf("Numero invalido! ");  /*mensagem para quando o usuario digitar um numero errado*/
            
        }
    }
}
