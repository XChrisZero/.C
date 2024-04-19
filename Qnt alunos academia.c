#include <stdio.h>

int main()
{
    int qaa,  laco;
  float pa , mpa, soma
    laco = 1;
    
    printf ("quantos alunos iram pesar? ");
    scanf ("%i", &qaa);
    
    
    while (qaa >= laco) 
    {
        printf ("\n digite o peso do aluno:  ");
        scanf ("%f", &pa);
        soma += pa;
        laco++;
    }
    mpa = soma / qaa;
    
            
      printf("\n resultado é %f kg",mpa);
  
}
