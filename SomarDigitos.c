#include <stdio.h>
#include <assert.h>

//
// Somar dígitos
//

int somarDigitos(int numero)
{
    int soma = 0;

    while (numero != 0)
    {
        soma += numero % 10;
        numero = numero / 10;
    }

    return soma;
}

void main()
{
    assert(8 == somarDigitos(2015));
    assert(15 == somarDigitos(456));
}