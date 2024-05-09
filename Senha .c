#include <stdio.h>

int main()
{
    
    int new,password;
    
    while ( new == password ) /* "==" usado para verificar se dois valores são iguais */
    {
        printf("\n  Digite a sua nova senha: \n  ");
        scanf("%i", &new );
        printf("  Digite sua senha: \n  ");
        scanf("%i", &password);
        
        
        if( new != password ) /* "!=" o operador usado para verificar se dois valores são diferentes */
        {
            printf("        ----------------\n");
            printf("        Senha Incorreta! \n");
            printf("        ----------------\n");
           
        }
        
        else /* se sua senha for igual a senha antiga*/
        {
            printf("        --------------\n");
            printf("        Senha Correta! \n");
            printf("        --------------\n");
        }
        
       
    }
    
    
}
