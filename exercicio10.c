#include <stdio.h>

/*
    Escreva, em linguagem C, um programa que permita armazenar os dados de disciplinas e professores. Uma disciplina possui um código único, um nome e uma carga horária. Um professor possui um número funcional único, um  nome e uma titulação (mestrado/doutorado).  Disciplinas e professores  devem  ser armazenados em vetores de estrutura com no máximo 10 posições. O programa deve permitir realizar as seguintes operações:
    •        Cadastrar disciplinas e professores.
    •        Listar os dados de disciplinas e professores pelo código ou número funcional.
    •        Vincular uma disciplina a um professor.
    •        Dado um professor, listar as disciplinas que ele leciona.
*/

typedef struct disciplina
{
    int codigo, ch;
    char nome[50];
} disciplina;

typedef struct professor
{
    int numerof;
    char nome[50];
    char titulacao[15];
} professor;

#define TAM 10

int main ()
{
    disciplina disciplinas[TAM];
    professor professores[TAM];
    int i, opcao = 0, num, codigo, idx, nf;
    char nome[20];

    while (opcao != 7)
    {
        printf("Menu\n");
        printf("-----------------------\n");
        printf("Digite a acao que deseja realizar\n");
        printf("1-Cadastrar Disciplinas\n");
        printf("2-Cadastrar Professores");
        printf("3-Listar os dados da disciplina pelo codigo\n");
        printf("4-Listar os dados do professor pelo numero funcional\n");
        printf("5-Vincular disciplina a um professor\n");
        printf("6-Listar as disciplinas que um professor leciona\n");
        printf("7-Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("Quantas disciplinas deseja cadastrar?\n");
                scanf("%d", &num);
                if(num > TAM)
                {
                    printf("Nao e possivel cadastrar mais de 10 disciplinas!");
                }
                else
                {
                    for(i = 0; i < num; i++)
                    {
                        printf("Digite o nome, codigo e ch da %d disciplina:\n", i + i);
                        scanf(" %[^\n] %d %d", disciplinas[i].nome, disciplinas[i].codigo, disciplinas[i].ch);
                    }
                }
                break;
            case 2:
                printf("Quantos professores deseja cadastrar?\n");
                scanf("%d", &num);
                if(num > TAM)
                {
                    printf("Nao e possivel cadastrar mais de 10 professores!");
                }
                else
                {
                    for(i = 0; i < num; i++)
                    {
                        printf("Digite o nome, titulacao e numero funcional do %d professor:\n", i + i);
                        scanf(" %[^\n] %[^\n] %d", professores[i].nome, professores[i].titulacao, professores[i].numerof);
                    }
                }
                break;
            case 3:
                printf("Digite o codigo da disciplina:\n");
                scanf("%d", &codigo);
                idx = 0;
                for(i = 0; i < TAM; i++)
                {
                    if(disciplinas[i].codigo == codigo)
                    {
                        printf("Disciplina encontrada!\n");
                        printf("Nome: %s", disciplinas[i].nome);
                        printf("Codigo: %d", disciplinas[i].codigo);
                        printf("CH: %d", disciplinas[i].ch);
                        idx++;
                    }
                }
                if(idx == 0)
                {
                    printf("Disciplina nao existe!");
                }
                break;
            case 4:
                printf("Digite o numero funcional:\n");
                scanf("%d", &nf);
                idx = 0;
                for(i = 0; i < TAM; i++)
                {
                    if(professores[i].numerof == nf)
                    {
                        printf("Professor encontrado!\n");
                        printf("Nome: %s", professores[i].nome);
                        printf("Titulacao: %s", professores[i].titulacao);
                        printf("Numero Funcional: %d", professores[i].numerof);
                        idx++;
                    }
                }
                if(idx == 0)
                {
                    printf("Disciplina nao existe!");
                }
                break;
            case 5:
                printf("Digite o codigo da disciplina que deseja vincular:\n");
                scanf("%d", &codigo);
                printf("Digite o nome do professor:\n");
                scanf(" %[^\n]", nome);
                for(i = 0; i < TAM; i++)
                {
                    
                }
                break;
            case 7:
                printf("Saindo...");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }
    


    return 0;
}