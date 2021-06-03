#include <stdio.h>

int main()
{
    int n_lojas, n_teste;
    scanf("%d", &n_teste);

    while (n_teste-- > 0)
    {
        scanf("%d", &n_lojas);
        int maior_posi = 0;
        int menor_posi = 99;
        int posi, i;
        for (i = 0; i < n_lojas; i++)
        {
            scanf("%d", &posi);
            if (posi > maior_posi)
            {
                maior_posi = posi;
            }
            if (posi < menor_posi)
            {
                menor_posi = posi;
            }
        }
        int resultado = (maior_posi - menor_posi)*2;
        printf("%d\n", resultado);
    }
}

//https://www.urionlinejudge.com.br/judge/en/problems/view/3190
// o maior nomero menos o menor multiplicado por dois 
