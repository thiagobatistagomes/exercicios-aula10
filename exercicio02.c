#include <stdio.h>

/*
    Crie uma estrutura para armazenar os dados de um aluno: nome, número de matrícula e curso. Leia as informações de 5 alunos e armazene em um vetor dessa estrutura. A seguir, imprima os dados de todos os alunos na tela. Siga o formato de saída mostrado no Moodle.
*/

typedef struct aluno
{
    char nome[30];
    int numeroMatricula;
    char curso[30];
} aluno;

#define TAM 5

int main ()
{
    aluno alunos[TAM];
    int i;

    for(i = 0; i < TAM; i++)
    {
        printf("Digite o nome do aluno %d:\n", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Digite a matricula do aluno %d:\n", i + 1);
        scanf("%d", &alunos[i].numeroMatricula);
        printf("Digite o curso do aluno %d:\n", i + 1);
        scanf(" %[^\n]", alunos[i].curso);
        printf("\n");
    }

    for(i = 0; i < TAM; i++)
    {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].numeroMatricula);
        printf("Curso: %s\n", alunos[i].curso);
        printf("\n");
    }



    return 0;
}