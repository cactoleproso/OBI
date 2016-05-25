#include <stdio.h>
#include <string.h>
#include <math.h> 

int main(void)
{
	int abertura, i, ests;
	int count = 0;
	int fluxo[10000];
	scanf("%d" , &abertura);
	scanf("%d" , &ests);
	for ( i = 0; i < ests; i++)
	{
		scanf("%d",&fluxo[i]);
		if (fluxo[i] * abertura >= 40000000)
		{
			count++;
		}
	}
	printf("%d\n", count );
	return 0;
}