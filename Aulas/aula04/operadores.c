#include <stdio.h>

int main()
{

    int numero1 = 10;
    int numero2 = 20;

    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    float divisao = numero1 / (numero2 * 1.0);
    int resto_da_divisao = numero1 % numero2;

    printf("A soma de %i com %i eh igual a: %i\n", numero1, numero2, soma);
    printf("A subtracao de %i com %i eh igual a: %i\n", numero1, numero2, subtracao);
    printf("A multiplicacao de %i com %i eh igual a: %i\n", numero1, numero2, multiplicacao);
    printf("A divisao de %i com %i eh igual a: %.2f\n", numero1, numero2, divisao);
    printf("O resto da divisao de %i com %i eh igual a: %i\n", numero1, numero2, resto_da_divisao);

    // operadores incremento e decremento

    int incremento = numero1;
    int decremento = numero1;

    decremento--;
    incremento++;

    int pre_incremento = numero1;
    int pos_incremento = numero1;

    printf("O decremento de %i eh: %i\n", numero1, decremento);
    printf("O incremento de %i eh: %i\n", numero1, incremento);

    printf("O pos incremento de %i eh: %i\n", numero1, pos_incremento++);
    printf("O pre incremento de %i eh: %i\n", numero1, ++pre_incremento);

    // operadores relacionais

    int menor_que = numero1 < numero2;
    int mernor_ou_igual = numero1 <= numero2;
    int maior_que = numero1 > numero2;
    int maior_ou_igual = numero1 >= numero2;
    int igual = numero1 == numero2;
    int diferente = numero1 != numero2;


    printf("\no numero %i eh menor que %i? %i\n", numero1, numero2, maior_que);
    printf("o numero %i eh menor ou igual a %i? %i\n", numero1, numero2, mernor_ou_igual);
    printf("o numero %i eh maior que %i? %i\n", numero1, numero2, maior_que);
    printf("o numero %i eh maior ou igual que %i? %i\n", numero1, numero2, maior_ou_igual);
    printf("o numero %i eh igual a %i? %i\n", numero1, numero2, igual);
    printf("o numero %i eh diferente de %i? %i\n", numero1, numero2, diferente);
    return 0;
}