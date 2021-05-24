#include <stdio.h>
#include <assert.h>

int antecessor(int numero)
{
    return numero - 1;
}

int sucessor(int numero)
{
    return numero + 1;
}

int main()
{
    int num,ant,suc;

    scanf("%d", &num);
    ant = antecessor(num);
    suc = sucessor(num);
    printf("%d\n%d",ant,suc);
    return 0;
}