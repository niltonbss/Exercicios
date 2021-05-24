#include <math.h>
#include <stdio.h>
#include <assert.h>

//
// Equação de 2 grau
//

int delta(int a, int b, int c)
{
    return b * b - 4 * a * c;
}

// Retorna o valor da primeira raiz
int raiz1(int a, int b, int c)
{
    return (-b + sqrt(delta(a, b, c))) / 2 * a;
}

// Retorna o valor da segunda raiz
int raiz2(int a, int b, int c)
{
    return (-b - sqrt(delta(a, b, c))) / 2 * a;
}

int main()
{

    int a, b, c;

    printf("Informe o valor de a");
    scanf("%d\n", &a);

    printf("Informe o valor de b");
    scanf("%d\n", &b);

    printf("Informe o valor de c");
    scanf("%d\n", &c);

    int resutdelta = delta(a, b, c);
    int resultraiz1 = raiz1(a, b, c);
    int resultraiz2 = raiz2(a, b, c);

    printf("%d Valor de Delta\n", resutdelta);
    printf("%d Valor de Raiz 1\n", resultraiz1);
    printf("%d Valor de Raiz 2\n", resultraiz2);

    return 0;
}