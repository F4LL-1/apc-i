#include <stdio.h>

int main()
{

    float notas[10];

    float soma, media;

    int qtde_acima_da_media;

    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &notas[i]);

         soma = soma + notas[i];
    }

    media = soma / 10;

    for (int i = 0; i < 10; i++)
    {
        if (notas[i] > media)
        {
            qtde_acima_da_media = qtde_acima_da_media + 1;
        }
    }

    printf("A media e: %f", media);
    printf("A qtdade acima da media e: %f", qtde_acima_da_media);

    return 0;
}