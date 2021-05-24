#include <stdio.h>
#include <assert.h>

//
// Positivo ou Negativo
//

int ehPositivo(int numero)
{
    if (numero >= 0)
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
    int testetana = ehPositivo(abc);
    if (testetana == 0)

    {
        printf("Negativo");
    }
    else
    {
        printf("Positivo");
    }

    return 0;
}