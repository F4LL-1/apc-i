#include <stdio.h>

int main()
{

    float preco;

    printf("Digite um preco: ");
    scanf("%f", &preco);
    printf("voce digitou R$%.2f\n", preco);

    double fracao;

    printf("Digite uma fracao: ");
    scanf("%lf", &fracao);
    printf("Voce digitou: %.10f\n", fracao);

    return 0;
}