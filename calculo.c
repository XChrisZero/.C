#include <stdio.h>

int main()
{
    int  cod;
    float quant;
    
     
    printf("Digite o codigo: \n");
    scanf("%i", &cod);
    printf("Digite a quantidade: \n");
    scanf("%f", &quant);
    
    switch(cod) /* é utilizada para tomar decisões com base no valor de uma expressão inteira.
    Ela oferece uma maneira mais eficiente de lidar com múltiplas escolhas do que várias instruções if-else encadeadas. */
    {
        case 100: 
         printf("%f a pagar: \n", quant * 1.2); /* escreve na tela a variavel"cod" usando o "%".
         Em seguida usamos a outra variavel "quant" para mutiplicar pelo seu valor neste caso sendo 1.20 */
         break; /* Para finalizar o caso em questão */
        
        case 101:
         printf("%f a pagar: \n", quant * 1.3); /* a variavel "quant" neste caso é 1.30 */
         break;
        
        case 102:
         printf("%f a pagar: \n", quant * 1.5); /* a variavel "quant" neste caso é 1.50  */
         break;
        
        case 103:
         printf("%f a pagar: \n", quant * 1.2); /* a variavel "quant" neste caso é 1.20 */
         break;
        
        case 104:
         printf("%f a pagar: \n", quant * 1.7); /* a variavel "quant" neste caso é 1,70 */
         break;
        
        case 105:
         printf("%f a pagar: \n", quant * 2.2); /* a variavel "quant" neste caso é 2.20 */
         break;
        
        case 106:
         printf("%f a pagar: \n", quant * 1.0); /* a variavel "quant" neste caso é 1.00 */
         break; 
        
        default: /* em caso de nenhuma das alternativas anteriores ser escolhida o "Default" é a chave de finalização */
         printf("esse codigo não existe");
         break;
        
    }
}
