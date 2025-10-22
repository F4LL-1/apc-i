#include <stdio.h>

int main()
{

    int numero = 0;

    printf("Entre com um numero inteiro de 1 a 10: ");
    scanf("%i", &numero);

    while (numero < 1 || numero > 10)
    {
        printf("O numero deve estar entre 1 e 10\n");
        printf("Tente novamente: ");
        scanf("%i", &numero);
    }

    return 0;
}