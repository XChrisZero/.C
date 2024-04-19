#include <stdio.h>

int main()  {
    int qaa, soma; /* 'soma' é uma variavel para somar os pesos dos alunos dentro da condição while */
    int laço = 1; /* a variavel 'laço' sómente foi criada para rodar o while*/
    float pa,  mpa;

    
    printf ( "Quantos alunos serão avaliaodos?: " );
    scanf ( "%i", &qaa );
    
    while ( qaa >= laço )   {
        printf ( "Digita o peso do aluno:" );
        scanf ( "%f", &pa );
     soma += pa; /* 'soma = soma + pa' equivale a '+='*/
     laço++; /* '++' operador de incremento, usado para toda vez q rodar o while adicionar 1*/
    }
mpa = soma / qaa; /* media é igual a soma(soma += pa) dividido pela quantidade de alunos*/
    
  printf("\n\n  A média de peso dos alunos é de %.2fkg.", mpa);

}

