#include <stdio.h>

int main(){

    int numero;

    scanf("%i", &numero);

    int incremento = numero;
    int decremento = numero;

    printf("O pre-incremento do numero %i e %i\n", numero, ++incremento);
    printf("O pre-decremento do numero %i e %i\n", numero, --decremento);



    incremento = numero;
    decremento = numero;

    printf("O pos-incremento do numero %i e %i\n", numero, incremento++);
    printf("O pos-decremento do numero %i e %i\n", numero, decremento--);


    return 0;
}