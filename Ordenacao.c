#include <stdio.h>
#include <assert.h>

void swap(int *v, int *b) //  Função que guarda o valor pra trocar de posição(troca dois valores de lugar)
{
    int aux = *v;
    *v = *b;
    *b = aux;
}

void selectionSort(int *v, int tam)
{

    int aux = 0, i, j, posicaoMenor;
    for (i = 0; i < tam; i++)
    {

        posicaoMenor = i;
        for (j = i + 1; j < tam; j++)
        {
            if (v[posicaoMenor] > v[j])
            {
                posicaoMenor = j;
            }
        }
        if (posicaoMenor != i)
        {
            aux = v[posicaoMenor];
            v[posicaoMenor] = v[i];
            v[i] = aux;
        }
    }
}
void bubbleSort(int *v, int tam)
{
    int aux = 0, i, j;
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam - 1; j++)
            if (v[j] > v[j + 1])
            {
                swap(&v[j+1], &v[j]); // aqui estou chamando a função e atribuindo os parâmetros
            }
    }
}

int main() // executa primeiro
{

    int tamanhoDoVetor, i = 0;

    scanf("%d", &tamanhoDoVetor);

    int vetor[tamanhoDoVetor];

    for (i = 0; i < tamanhoDoVetor; i++)
    {
        scanf("%d", &vetor[i]);
    }
    //selectionSort(vetor, tamanhoDoVetor); // aqui estou chamando a função e atribuindo os parâmetros
    bubbleSort(vetor, tamanhoDoVetor);  // aqui estou chamando a função e atribuindo os parâmetros

    for (i = 0; i < tamanhoDoVetor; i++)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}








