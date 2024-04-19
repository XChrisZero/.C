#include <stdio.h>
#include <stdbool.h>
int main()  {

bool bitcoin = true;
int op, laço; /*Opcões de menu, e uma para o laço*/
float vs, vd; /* valor do saque e valor de deposito*/
float s = 0.0; /* Saldo em conta*/

    while (bitcoin == true ) {
        printf ( "\n--------------------Menu Principal:--------------------\n\n" );
        printf ( "\n            1- Consulta de saldo.\n" );
        printf ( "\n            2- Saque alguem valor.\n" );
        printf ( "\n            3- Depósitar algum valor.\n" );
        printf ( "\n            4. Encerrar transação.\n" );
        printf ( "\n            <- Digite uma opção ->: \n" );
        scanf ( "%i", &op );
        printf ( "\n-------------------------------------------------------\n" );

switch (op)    {
    case 1: /* Consultar o saldo*/
        printf ( "\n                Seu Saldo atual é:R$ %.2f \n ", s );
        printf ( "\n-------------------------------------------------------\n" );
        break;
    
    case 2: /* Sacar algum saldo*/
        printf ( "\n                Digite o valor do saque: R$\n" );
        scanf ( "%f", &vs );
        printf ( "\n-------------------------------------------------------\n" );
        
        if (vs <= s)    {
            s = s - vs; /* saldo -= valor do saque*/
            printf ( "\n                Saque feito com sucesso!\n" );
            printf ( "\n                Saldo atual é R$%.2f\n", s );
            printf ( "\n-------------------------------------------------------\n" );
        }
        else    {
            printf ( "\n                Quantidade insuficiente para saque! \n" );
            printf ( "\n-------------------------------------------------------\n" );
        }
        break;
   
    case 3: /*Depositar algum saldo*/
        printf ( "\n                Quanto deseja depositar?: R$" );
        scanf("%f", &vd);
        printf ( "\n-------------------------------------------------------\n" );
        
        s = s + vd; /* saldo += valor do deposito*/ 
        
        printf ( "\n                Depósito realizado com sucesso!\n" );
        printf ( "\n                Saldo atual: R$%.2f\n", s );
        printf ( "\n-------------------------------------------------------\n" );
        break;

    case 4: /*Encerrar a transação*/
        printf ( "\n                Volte Sempre!\n" );
        printf ( "\n-------------------------------------------------------\n" );
        bitcoin = false;
        break;

    default: /*Mensagem de erro*/
     printf("\n     Opção inválida!!!. \n");
     printf( "\n    Tente novamente.\n" );
     printf ( "\n-------------------------------------------------------\n" );
}

    }} 
     
