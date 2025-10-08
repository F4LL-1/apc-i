#include <stdio.h>

int main()
{

    int nota;

    printf("entre com uma nota de 1 a 5: ");
    scanf("%i", &nota);

    if (nota == 1)
    {
        printf("Sua avaliacao foi *\n");
    }

    else if (nota == 2)
    {
        printf("Sua avaliacao foi **\n");
    }
    else if (nota == 3)
    {
        printf("Sua avaliacao foi ***\n");
    }
    else if (nota == 4)
    {
        printf("Sua avaliacao foi ****\n");
    }
    else if (nota == 5)
    {
        printf("Sua avaliacao foi *****\n");
    }
    else
    {
        printf("Nota invalida! Tente novamente.\n");
    }

    return 0;
}