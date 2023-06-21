#include <stdio.h>

/*
    Faça um programa que leia um vetor de estrutura com os dados de 8 carros: marca, preço e ano. A seguir, leia um valor P e mostre as informações de todos os carros com preço menor que P. Repita esse processo até que seja lido um valor P ≤ 0.
*/

typedef struct carro
{
    char marca[10];
    float preco;
    int ano;
} carro;

#define TAM 8

int main ()
{
    carro carros[TAM];
    int i;
    float p;

    for(i = 0; i < TAM; i++)
    {
        printf("Digite a marca, preco e ano do %dº carro:\n", i + 1);
        scanf(" %[^\n] %f %d", carros[i].marca, &carros[i].preco, &carros[i].ano);
    }

    do
    {
        printf("Digite um valor para P:\n");
        scanf("%f", &p);
        for(i = 0; i < TAM; i++)
        {
            if(p > carros[i].preco)
            {
                printf("Marca: %s\n", carros[i].marca);
                printf("Preco: %.2f\n", carros[i].preco);
                printf("Ano: %d\n", carros[i].ano);
            }
        }
    } while (p > 0.0);
    




    return 0;
}