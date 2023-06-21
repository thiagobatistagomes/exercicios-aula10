#include <stdio.h>
#include <math.h>

/*
     Crie uma estrutura para representar pontos em coordenadas polares: raio r e argumento a (em graus). Crie uma estrutura para representar pontos em coordenadas cartesianas: x e y. Leia 6 pontos em coordenadas polares e armazene em um vetor. A seguir, converta esses pontos para coordenadas cartesianas e armazene o resultado em outro vetor. A conversão é dada por: x = r * cos(a) e y = r * sen(a). Por fim, mostre o resultado de cada ponto em coordenadas cartesianas (x, y), com 1 casa decimal. Lembre-se que o valor do argumento deve estar em radianos para usar as funções cos e sin.
*/

typedef struct polar
{
    float raio;
    double angulo;
} polar;

typedef struct cartesiano
{
    double x, y;
} cartesiano;

#define TAM 6
    
int main ()
{
    polar cpolares[TAM];
    cartesiano ccartesianos[TAM];
    int i, j;

    for(i = 0; i < TAM; i++)
    {
        printf("Digite os valores do %dº ponto:\n", i + 1);
        scanf("%f %lf", &cpolares[i].raio, &cpolares[i].angulo);
    }

    // converter graus para radianos

    for(i = 0; i < TAM; i++)
    {
        cpolares[i].angulo = cpolares[i].angulo * (acos(-1) / 180);
    }

    //converter os pontos para coordenadas cartesianas

    j = 0;

    for(i = 0; i < TAM; i++)
    {
        ccartesianos[j].x = cpolares[i].raio * cos(cpolares[i].angulo);
        ccartesianos[j].y = cpolares[i].raio * sin(cpolares[i].angulo);
        j++;
    }

    //mostrar os resultados

    for(i = 0; i < TAM; i++)
    {
        printf("Coordenadas cartesianas: (%.1lf , %.1lf)\n", ccartesianos[i].x, ccartesianos[i].y);
    }


    return 0;
}