#include <stdio.h>
#include <assert.h>

//
// Par ou Impar
//

int ehPar(int numero)
{

    if (numero % 2 == 0)
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
    int par = ehPar(abc);

    if (par == 1)

    {
        printf("É par\n");
    }
    else
    {
        printf("É impar\n");
    }
    return 0;
}