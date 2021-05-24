#include <stdio.h>
#include <assert.h>

//
// Algoritmo para carregar um vetor
//

int main()
{
    int vetor[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        vetor[i] = i + 1;
    }

    assert(1 == vetor[0]);
    assert(2 == vetor[1]);
    assert(3 == vetor[2]);
    assert(4 == vetor[3]);
    assert(5 == vetor[4]);
    return 0;
}
