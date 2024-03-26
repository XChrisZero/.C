#include <stdio.h>

int main()
{
   int n1;
   
   printf("Digite sua nota: \n"); /*perguntar para o usuario a nota dele */
   scanf("%i", &n1);/*ler a nota digitada*/
   
   if(n1 >100 || n1<0){
        printf("Nota Invalida"); 
       
   } /* se sua nota for maior que 100 OU menor que 0, o usuario recebe uma mensagem de erro */
   
   else if(n1 >= 86 && n1 <=100){
        printf("Sua nota é A");
    } /* se a nota for maior ou igual a 85 E menor ou igual a 100 printa a mensagem de nota A*/
    else if(n1 >=61 && n1 <=85 ){
        printf("Sua nota é B");
    } /* se a nota for maior ou igual a 61 E menor ou igual a 85 printa a mensagem de nota B*/
    else if(n1 >=36 && n1 <=60 ){
        printf("Sua nota é C");
    } /* se a nota for maior ou igual a 36 E menor ou igual a 60 printa a mensagem de nota C*/
    else if(n1 =1 && n1 <=35 ){
        printf("Sua nota é D");
    } /* se a nota for igual a 1 E menor ou igual a 35 printa a mensagem de nota D*/
    else{
    printf("Sua nota é E");
} /* se a nota Não for nenhuma das opiçoes a cima prita a mensagem de nota E*/
   
}
