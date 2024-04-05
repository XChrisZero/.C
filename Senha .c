#include <stdio.h>

int main()
{
    
    int new,password;
    
    while ( new == password ) /* "==" usado para verificar se dois valores são iguais */
    {
        printf("Digite a sua nova senha: \n");
        scanf("%i", &new );
        printf("Digite sua senha: \n");
        scanf("%i", &password);
        
        if( new != password ) /* "!=" o operador usado para verificar se dois valores são diferentes */
        {
            printf("Senha Incorreta! \n");
           
        }
        
        else /* se sua senha for igual a senha antiga*/
        {
            printf("Senha Correta! \n");
        }
        
       
    }
    
    
}
