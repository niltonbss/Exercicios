#include <stdio.h>
#include <assert.h>

//
// Reajuste de Salario
//

float reajustar_salario(float salario, float reajuste)
{
    return salario * reajuste;
}

int main()
{
    int salarioreajustado = reajustar_salario(1000, 0.15);

    printf("%d\n", salarioreajustado);
    return 0;
}