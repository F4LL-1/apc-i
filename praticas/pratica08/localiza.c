#include <stdio.h>

int main()
{

    int numeros[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &numeros[i]);
    }

    int numero;
    scanf("%i", &numero);

    int achou = -1;
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] == numero)
        {
            achou = i;
            break;
        }
    }

    if (achou < 0)
    {
        printf("O numero nao foi encontrado!");
    }
    else
    {
        printf("O numero foi encontrado na posicao %i\n", achou);
    }

    return 0;
}