#include <stdio.h>

int fator(int numf) /*int declara uma função chamada 'fator()' 
que recebe um inteiro 'numf' como parâmetro e retorna um inteiro */ {
  if (numf == 0)  {
    return 1; /*  Se 'numf' for igual a 0, retorna 1 */
  }
  else {
    return numf * fator(numf - 1); /* Retorna o produto de numf pelo fatorial de numf - 1. Isso implementa a definição recursiva do fatorial.*/
  }
}

int main() {
    int numfa, result;

  printf("Digite um número inteiro positivo: ");
  scanf("%i", &numfa);

  result = fator(numfa); /* Chama a função 'fator()' para calcular o fatorial do número armazenado em
  'numf' e armazena o resultado na variável 'result'.*/

  printf("\n\n O fatorial de %i é %i\n", numfa, result);


}
