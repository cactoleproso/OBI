#include <stdio.h>

int main (void)
{
	int i, qnt, maior, num, maiorn;
	int comp[101];
	for ( i = 0; i < 101; i++)
	{
		comp[i]= 0;
	}
	scanf("%d", &qnt);
	for ( i = 0; i < qnt; i++)
	{	
		scanf("%d", &num);
		comp[num] = comp[num] + 1;
	}
	maior = 0;
	for ( i = 0; i < 101; i++)
	{
		if ( comp[i] >= maior)
		{
			maior = comp[i];
			maiorn = i;
		}
	}
	printf("%d", maiorn );
	return 0;
}