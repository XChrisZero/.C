#include <stdio.h>
#include <stdbool.h>
int main()  {

bool bitcoin = true;
int op; /*Opcões de menu, e uma para o laço*/
float vs, vd; /* valor do saque e valor de deposito*/
float sc = 0.0; /* Saldo em conta*/

    while (bitcoin == true )    {
        printf ( "\n--------------------Menu Principal:--------------------\n\n" );
        printf ( "\n            <- Digite uma opção -> \n" );
        printf ( "\n            1- Consulta de saldo.\n" );
        printf ( "\n            2- Saque alguem valor.\n" );
        printf ( "\n            3- Depósitar algum valor.\n" );
        printf ( "\n            4. Encerrar transação.\n" );
        scanf ( "%i", &op );
        printf ( "\n-------------------------------------------------------\n" );

switch (op)    {
    case 1: /* Consultar o saldo*/
        printf ( "\n                Seu Saldo atual é:R$ %.2f \n ", sc );
        printf ( "\n-------------------------------------------------------\n" );
        break;
    
    case 2: /* Sacar algum saldo*/
        printf ( "\n                Digite o valor do saque: R$\n" );
        scanf ( "%f", &vs );
        printf ( "\n-------------------------------------------------------\n" );
        
        if (vs <= sc)    {
            sc = sc - vs; /* saldo em conta -= valor do saque*/
            printf ( "\n                Saque feito com sucesso!\n" );
            printf ( "\n                Saldo em conta é R$%.2f\n", sc );
            printf ( "\n-------------------------------------------------------\n" );
        }
        else    {
            printf ( "\n                Quantidade insuficiente para saque! \n" );
            printf ( "\n                você possui R$%.2f na conta\n", sc );
            printf ( "\n-------------------------------------------------------\n" );
        }
        break;
   
    case 3: /*Depositar algum saldo*/
        printf ( "\n                Quanto deseja depositar?: R$" );
        scanf("%f", &vd);
        printf ( "\n-------------------------------------------------------\n" );
        
        sc = sc + vd; /* saldo em conta += valor do deposito*/ 
        
        printf ( "\n                Depósito realizado com sucesso!\n" );
        printf ( "\n                Saldo em conta é: R$%.2f\n", sc );
        printf ( "\n-------------------------------------------------------\n" );
        break;

    case 4: /*Encerrar a transação*/
        printf ( "\n                Volte Sempre!\n" );
        printf ( "\n-------------------------------------------------------\n" );
        bitcoin = false;
        break;

    default: /*Mensagem de erro*/
        printf ( "\n     Opção inválida!!!. \n");
        printf ( "\n    Digite um dos seguintes numeros 1,2,3 ou 4.\n" );
        printf ( "\n-------------------------------------------------------\n" );
}

    }
    
}
