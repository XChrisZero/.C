#include <stdio.h>

int main()
{

    float num1, num2;
    
    printf( "Digite primeiro numero\n" );
    scanf( "%f", &num1 );
    
    printf( "Digite segundo numero\n" );
    scanf( "%f", &num2 );
    
    if(num1 > num2)     { 
     printf("Numero maior é: %.2f",num1);
        
    }
    else if( num1 == num2 )     {
     printf("iguais");
    }
    else    {
     printf("Numero maior é: %.2f", num2);
    }

}
