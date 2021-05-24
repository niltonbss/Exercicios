#include <stdio.h>
int tam = 0;
int diagonalPrincipal(int matriz[tam][tam], int tamanhoMatriz)
{
    printf("entrou na funcao\n");
    int valorDiagonal = 0, i, j;

    for (i = 0; i < tamanhoMatriz; i++)
    {
        for (j = 0; j < tamanhoMatriz; j++)
        {
            if (i == j)
            {
                // soma o valor da matriz na posição i, j ao valor acumulado da diagonal
                //e guarda no valor acumulado(valorDiagonal)
                valorDiagonal = matriz[i][j] + valorDiagonal;
                printf("%d\n", valorDiagonal);
            }
        }
    }
    printf("saiu da funcao\n");
    return valorDiagonal;
}

int diagonalSecundaria(int matriz[tam][tam], int tamanhoMatriz)
{
    int valorDiagonal = 0, i, j;

    for (i = 0; i < tamanhoMatriz; i++)
    {
        for (j = tamanhoMatriz - 1; j >= 0; j--)
        {
            if ((i + j) == tamanhoMatriz - 1)
            {
                // soma o valor da matriz na posição i, j ao valor acumulado da diagonal
                //e guarda no valor acumulado(valorDiagonal)
                valorDiagonal = matriz[i][j] + valorDiagonal;
            }
        }
    }
    return valorDiagonal;
}

int main() // executa primeiro
{

    scanf("%d", &tam);

    int matriz[tam][tam], i, j;

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            printf("\t%d ", matriz[i][j]);
        }
        printf("\n");
    }


    int resultado = diagonalPrincipal(matriz, tam);
    // aqui estou chamando a função e atribuindo os parâmetros

    printf("o resultado da diagonal principal eh%d\n", resultado);

    int resultado2 = diagonalSecundaria(matriz, tam);

    printf("o resultado da diagonal secundaria eh%d\n", resultado2);

    return 0;
}
