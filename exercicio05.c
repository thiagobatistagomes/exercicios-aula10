#include <stdio.h>
#include <string.h>

/*
     Utilizando um vetor de estrutura, faça um programa que leia o nome e o telefone de 5 pessoas e os imprima em ordem alfabética pelo nome. Dica: pesquise os detalhes de uso da função strcmp().
*/

typedef struct pessoa
{
    char nome[40];
    int numero_telefone;
} pessoa;

#define TAM 5

int main ()
{
    pessoa pessoas[TAM];
    int i, j;

    for(i = 0; i < TAM; i++)
    {
        printf("Digite seu nome e numero de telefone:\n");
        scanf(" %[^\n] %d", pessoas[i].nome, &pessoas[i].numero_telefone);
    }

    for (i = 0; i < TAM - 1; i++)
    {
        for (j = i + 1; j < TAM; j++)
        {
            if (strcmp(pessoas[j].nome, pessoas[i].nome) < 0)
            {
                pessoa temp = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = temp;
            }
        }
    }

    printf("Pessoas em ordem alfabetica pelo nome:\n");
    for (i = 0; i < TAM; i++)
    {
        printf("Nome: %s, Telefone: %d\n", pessoas[i].nome, pessoas[i].numero_telefone);
    }


    return 0;
}