#include <stdio.h>
#include <assert.h>

//
// Maior que 10
//

int ehMaiorQue10(int valorQualquer)
{
    if (valorQualquer > 10)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int abc;
    scanf("%d", &abc);
    int diferenca = ehMaiorQue10(abc);
    if (diferenca == 1)

    {
        printf("Maior Que 10");
    }
    else
    {
        printf("Menor Que 10");
    }
    return 0;
}