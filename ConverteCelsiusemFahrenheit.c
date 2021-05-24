#include <stdio.h>
#include <assert.h>

//
// Converte celsius em fahrenheit
//

int toFahrenheit(int numero)
{
    return numero / 5 * 9 + 32;
}
int main()
{
    int num;
    printf("Informe a Temperatura em Celsius ");
    scanf("%d", &num);
    int fahrenheit = toFahrenheit(num);
    printf("%d Fahrenheit\n", fahrenheit);
    return 0;
}