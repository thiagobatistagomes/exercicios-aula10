#include <stdio.h>
#include <string.h>

/*
    Em um vetor de estrutura, armazene as seguintes informações sobre 8 livros: título, autor e ano. A seguir, leia o nome de um autor e mostre os títulos e anos dos livros escritos por ele. Repita o processo até que o usuário digite “sair”.
*/

typedef struct biblioteca
{
    char titulo[30];
    char autor[40];
    int ano;
} biblioteca;

#define TAM 8

int main ()
{
    biblioteca livros[TAM];
    int i, idx;
    char opcao[40];

    for(i = 0; i < TAM; i++)
    {
        printf("Digite o titulo, autor e ano do livro %d:\n", i + 1);
        scanf(" %[^\n] %[^\n] %d", livros[i].titulo, livros[i].autor, &livros[i].ano);
    }

    do
    {
        scanf(" %[^\n]", opcao);
        if (strcmp(opcao, "sair") != 0)
        {
            printf("Livros de %s:\n", opcao);
            for(i = 0; i < TAM; i++)
            {
                if(strcmp(livros[i].autor, opcao) == 0)
                {
                    printf("%s (%d)\n", livros[i].titulo, livros[i].ano);
                }
            }
            printf("\n");
        }
    } while (strcmp(opcao, "sair") != 0);
    


    return 0;
}