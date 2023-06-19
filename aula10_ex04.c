#include <stdio.h>
#include <string.h> // strcpy
#include <time.h> // time(NULL)
#include <stdlib.h> // rand, srand

typedef struct carta
{
	char valor; // A, 2, 3, 4..., 9, Q, J, K
	char naipe[7];
}carta;

int main()
{
	char val[12] = {'A','2','3','4','5','6','7','8','9','Q','J','K'};
	char naipes[4][7] = {"paus", "copas", "espada", "ouro"};
	
	carta v[48];
	carta temp;
	int i, j, k;
	int x, y;
	
	k = 0; // vetor de cartas
	
	for(i = 0; i < 4; i++) // naipe
	{
		for(j = 0; j < 12; j++) // valores
		{
			v[k].valor = val[j];
			strcpy( v[k].naipe, naipes[i] );
			k++;
		}
	}

	printf("Baralho gerado:\n");
	for(k = 0; k < 48; k++)
	{
		printf("%c %s\n", v[k].valor, v[k].naipe );
	}
	
	// Embaralhando as cartas
	for(i = 0; i < 100; i++)
	{
		x = rand() % 48;
		y = rand() % 48;
		
		temp = v[x];
		v[x] = v[y];
		v[y] = temp;
	}
	
	printf("\n\nBaralho embaralhado:\n");
	for(k = 0; k < 48; k++)
	{
		printf("%c %s\n", v[k].valor, v[k].naipe );
	}
	
	return 0;
}





