#include <stdio.h>
#include <assert.h>

//
// Juros Simples
//

float juros_simples(float capital, float taxa, int aux)
{
    return capital * taxa * aux;
}

int main()
{
    float jurosimples = juros_simples(16000, 0.04, 4);
    int abc = jurosimples;
    printf("%f\n", jurosimples);
    printf("%d\n", abc);
   
    assert(2560 == abc);
    assert(2560 == jurosimples);
    return 0;
}