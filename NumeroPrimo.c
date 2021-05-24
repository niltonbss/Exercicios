#include <stdio.h>
#include <assert.h>

//
// Número primo
//

int ehPrimo(int num)
{
    int i, quantDivisores = 0;

    for (i = 1; i <= num; i++)
    {
        if (ehDivisaoExata(num, i))
        {
            quantDivisores++;
        }
    }

    if (quantDivisores == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int ehDivisaoExata(int dividendo, int divisor)
{
    return (dividendo % divisor) == 0;
}