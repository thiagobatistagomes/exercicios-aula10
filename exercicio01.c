#include <stdio.h>

/*
    Faça um programa que leia o nome, a idade e o endereço (rua e número) de uma pessoa e armazene os dados em uma estrutura. Mostre na tela as informações armazenadas.
*/

typedef struct pessoa
{
    char nome[30];
    int idade;
    char endereco[30];
} pessoa;

int main ()
{
    pessoa a;

    printf("Digite seu nome:\n");
    scanf("%[^\n]", a.nome);

    printf("Digite sua idade:\n");
    scanf("%d", &a.idade);

    printf("Digite seu endereco:\n");
    scanf(" %[^\n]", a.endereco);

    printf("Nome: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("Endereco: %s\n", a.endereco);

    return 0;
}