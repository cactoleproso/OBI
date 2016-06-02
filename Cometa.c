#include <stdio.h>
#include <string.h>
#include <math.h> 

int main(void)
{
    int ano, resultado;
    int i = 86;
    scanf("%d", &ano);
    while ( ano >= i)
    {
        i = i + 76;
    }
    resultado = i;
    printf("%d" ,resultado);
    return 0;   
}