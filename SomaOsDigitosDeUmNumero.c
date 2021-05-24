#include <stdio.h>
#include <assert.h>

//
// Função que soma os dígitos de um número
//
int somarDigitos(int num)
{
    int quociente, mod, soma;
    soma = 0;
    // Aqui entra a lógica do programa.

    while (num > 0)
    {
        printf("%d\n",num);
        quociente = num / 10;
        mod = num % 10;
        soma = mod + soma;
        num = quociente;

    }
    printf("--------------------------------------------------------------------------\n");
    return soma;
}

//
// Testes
//
int main()
{

    assert(8 == somarDigitos(2015));
    assert(15 == somarDigitos(456));
    assert(15 == somarDigitos(12345));
    return 0;
}