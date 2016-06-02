#include <stdio.h>
#include <string.h>
#include <math.h> 

int main(void)
{
    int barra, i;
    int chocolate = 0;
    int chocolate1 = 0;
    scanf("%d", &barra);
    for ( i = 0; i < barra; i++)
    {
        scanf("%d", &chocolate);   
        if ( i > 0)
            chocolate1 = chocolate - 1 + chocolate1;
        else
            chocolate1 = chocolate - 1;
    }
    printf("%d", chocolate1 );
    return 0;   
}