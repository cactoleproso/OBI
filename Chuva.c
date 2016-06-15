#include <stdio.h>

int main(void)
{
	int entrada; int i; int j; int coberto;
	int cont = 0;
	int secao[100000];
	scanf("%d", &entrada);
	for ( i = 0; i < entrada; i++)
	{
		scanf("%d", &secao[i]);
	}
	for ( i = 1; i < entrada - 1; i++)
	{
		coberto = 0;
		for ( j = i - 1; j >= 0 ; j--)
		{
			if (secao[j] > secao[i])
			{
				coberto++;
				break;
			}
		}
		for ( j = i + 1; j < entrada; j++)
		{
			if (secao[j] > secao[i])
			{
				coberto++;
				break;
			}
		}
		if ( coberto == 2 )
		{
			cont++;
		}
	}
	printf("%d\n", cont );
	return 0;

} 
