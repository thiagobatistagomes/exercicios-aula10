#include <stdio.h>

/*
    Crie uma estrutura representando os dados de um aluno: matrícula, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova. A seguir: a) entre com os dados de 5 alunos. b) encontre o aluno com maior nota na primeira prova, imprimindo seu nome completo e a nota, com 2 casas decimais. c) encontre o aluno com maior média geral, imprimindo seu nome completo, seguido da média, com 2 casas decimais. d) imprima uma listagem de matrícula e nome, dizendo também se cada aluno foi aprovado ou reprovado, considerando ao menos 60% de média para a aprovação.
*/

typedef struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
} aluno;

#define TAM 5

int main ()
{
    aluno alunos[TAM];
    int i;
    float maiorn1, maiormedia;

    //preenchendo os dados dos alunos

    for(i = 0; i < TAM; i++)
    {
        printf("Digite o numero de matricula do aluno %d:\n", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite o nome do aluno %d:\n", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Digite as 3 notas do aluno %d: \n", i + 1);
        scanf("%f %f %f", &alunos[i].n1, &alunos[i].n2, &alunos[i].n3);
        printf("\n");
    }

    //encontrar aluno com maior n1, imprimir seu nome completo e a nota com duas casas decimais

    maiorn1 = alunos[0].n1;

    for(i = 0; i < TAM; i++)
    {
        if(alunos[i].n1 > maiorn1)
        {
            maiorn1 = alunos[i].n1;
        }
    }

    for(i = 0; i < TAM; i++)
    {
        if(alunos[i].n1 == maiorn1)
        {
            printf("Aluno com maior nota na primeira prova:\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Nota: %.2f\n", alunos[i].n1);
            printf("\n");
          
        }
    }

    //encontrar o aluno com maior media geral, imprimir seu nome completo, seguido da média, 2 casas decimais.

    maiormedia = (alunos[0].n1 + alunos[0].n2 + alunos[0].n3)/ 3;

    for(i = 0; i < TAM; i++)
    {
        if((alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/ 3 > maiormedia)
        {
            maiormedia = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/ 3;
        }
    }

    for(i = 0; i < TAM; i++)
    {
        if((alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/ 3 == maiormedia)
        {
            printf("Nome: %s\n", alunos[i].nome);
            printf("Media: %.2f", maiormedia);
        }
    }

    return 0;
}