#include <stdio.h>
#include <string.h> // strcmp
#define TAM 5

typedef struct aluno
{
	int matricula;
	char nome[50];
}aluno;

int main()
{
	aluno v[TAM];
	int i, idx;
	int opcao = 0;
	int matr;
	char nome[50];
	
	for(i = 0; i < TAM; i++)
	{
		printf("Aluno %d:\n", i + 1);
		printf("Informe a matricula: ");
		scanf(" %d", &v[i].matricula );
		printf("Informe o nome: ");
		scanf(" %[^\n]", v[i].nome );
		printf("\n");
	}

	while(opcao != 9)
	{
		printf("Escolha uma opcao:\n");
		printf("1 - pesquisar aluno por matricula\n");
		printf("2 - pesquisar aluno por nome\n");
		printf("9 - sair\n");
		scanf("%d", &opcao );
		
		switch(opcao)
		{
			case 1:
				printf("Informe a matricula: ");
				scanf("%d", &matr);

				idx = -1;
				
				for(i = 0; i < TAM; i++)
				{
					if( matr == v[i].matricula )
					{
						idx = i;
						break;
					}
				}
				
				if(idx == -1)
				{
					printf("Matricula nao encontrada!\n");
				}
				else
				{
					printf("Matricula: %d\n", v[idx].matricula );
					printf("Nome: %s\n", v[idx].nome );
					printf("\n");
				}
				
				break;
			case 2:
				printf("Informe o nome: ");
				scanf(" %[^\n]", nome);
				
				idx = -1;
				
				for(i = 0; i < TAM; i++)
				{
					if( strcmp(nome, v[i].nome ) == 0 )
					{
						idx = i;
						break;
					}
				}
				
				if(idx == -1)
				{
					printf("Nome nao encontrado!\n");
				}
				else
				{
					printf("Matricula: %d\n", v[idx].matricula );
					printf("Nome: %s\n", v[idx].nome );
					printf("\n");
				}
				
				break;
			case 9:
				printf("Encerrando o programa...\n");
				break;
			default:
				printf("Opcao invalida!!!\n");
				break;
		}
	}

	return 0;
}

