#include <stdio.h>

int main(){

    int numero = 0;


    printf("Entre com um numero: ");
    int leu_certo = scanf("%i", &numero);

    while (leu_certo == 0)
    {
        while (getchar() != '\n');
        printf("Não e um numero! Tente novamente.\n");
        printf("Entre com um numero: ");
        leu_certo = scanf("%i", &numero);
    }
     












    return 0;
}