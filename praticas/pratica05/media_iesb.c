#include <stdio.h>

int main ()
{

    float nota_a1, nota_a2;

    scanf("%f", &nota_a1);
    scanf("%f", &nota_a2);

    float media = (nota_a1 * 0.4) + (nota_a2 * 0.6);

    printf("A media e: %.1f", media);

    return 0;
}