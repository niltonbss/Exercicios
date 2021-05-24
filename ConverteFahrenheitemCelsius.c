#include <stdio.h>
#include <assert.h>

//
// Converte fahrenheit em celsius
//
int toCelsius(int numero)
{
    return 5 * (numero - 32) / 9;
}

int main()
{
    int num;
    printf("Informe a Temperatura em Fahrenheit ");
    scanf("%d", &num);
    int celsius = toCelsius(num);
    printf("%d Celsius\n", celsius);
    return 0;
}