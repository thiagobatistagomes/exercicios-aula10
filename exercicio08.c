#include <stdio.h>

/*
    Declare uma estrutura para representar números complexos, formados por parte real e parte imaginária. A seguir, leia dois números complexos (parte real seguida de parte imaginária de cada um). Apresente como resposta a soma, a subtração e o produto dos números complexos, sendo um valor por linha.
*/



typedef struct complexos
{
    float real;
    float imaginaria;
} complexos;

int main()
{
    complexos numero1, numero2, soma, subtracao, produto;

    // Leitura dos números complexos
    printf("Digite a parte real e a parte imaginária do primeiro número complexo:\n");
    scanf("%f %f", &numero1.real, &numero1.imaginaria);

    printf("Digite a parte real e a parte imaginária do segundo número complexo:\n");
    scanf("%f %f", &numero2.real, &numero2.imaginaria);

    // Soma dos números complexos
    soma.real = numero1.real + numero2.real;
    soma.imaginaria = numero1.imaginaria + numero2.imaginaria;

    // Subtração dos números complexos
    subtracao.real = numero1.real - numero2.real;
    subtracao.imaginaria = numero1.imaginaria - numero2.imaginaria;

    // Produto dos números complexos
    produto.real = (numero1.real * numero2.real) - (numero1.imaginaria * numero2.imaginaria);
    produto.imaginaria = (numero1.real * numero2.imaginaria) + (numero1.imaginaria * numero2.real);

    // Imprimir os resultados
    printf("Soma: %.2f + %.2fi\n", soma.real, soma.imaginaria);
    printf("Subtração: %.2f + %.2fi\n", subtracao.real, subtracao.imaginaria);
    printf("Produto: %.2f + %.2fi\n", produto.real, produto.imaginaria);

    return 0;
}