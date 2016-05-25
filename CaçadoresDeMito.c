#include <stdio.h>
#include <string.h>
#include <math.h> 

int main(void)
{
	int raios, i, largura, altura, j;
	j = 0;
	int coord[505][505];
	scanf ("%d" , &raios);
	for ( i = 0 ; i < raios ; i++)
	{
		scanf("%d%d", &largura, &altura);
		if ( coord[largura][altura] == 1)
		{
			j = 1;
		}
		else 
			coord[largura][altura] = 1;
	}
	printf("%d\n", j );
	return 0;	
}