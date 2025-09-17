#include <stdio.h>

int main()
{

    int numero1;
    int numero2;
    float numero3;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero1);
    printf("Digite um numero inteiro: ");
    scanf("%i", &numero2);
    printf("Digite um numero flutuante: ");
    scanf("%f", &numero3);

    int soma = numero1 + numero2;

    printf("A soma de %i com %i eh igual a: %i\n", numero1, numero2, soma);

    int subtracao = numero1 - numero2;

    printf("A subtracao de %i com %i eh igual a: %i\n", numero1, numero2, subtracao);

    int multipicacao = numero1 * numero2;

    printf("A multiplicacao de %i com %i e igual a: %i\n", numero1, numero2, multipicacao);

    int divisao = numero1 / numero2;

    printf("A divisao de %i por %i e igual a %i\n", numero1, numero2, divisao);
    
    int resto_divisao = numero1 % numero2;

    printf("O resto da divisao de %i por %i e igual a %i\n", numero1, numero2, resto_divisao);

    float divisao_fracionada = numero1 / numero3;

    printf("A divisao fracionada de %i por %f e igual a %f\n", numero1, numero3, divisao_fracionada);




    return 0;
}