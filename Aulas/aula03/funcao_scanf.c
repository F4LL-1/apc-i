#include <stdio.h>

int main()
{
    // tipos de dados
    // char - caractere
    // int - inteiro
    // fload - flutuante - até 6 casas decimais
    // duble - flutuante - até 12 casas
    // void - sem tipo

    // variaveis e constantes
    int idade = 10;
    char tecla = 's';
    float nota = 8.5f;
    const double pi = 3.1415232345;

    printf("Os valores das variaveis: \n");
    printf("idade = %i\n", idade);
    printf("tecla = %c\n", tecla);
    printf("nota = %.2f\n", nota);
    printf("pi = %.12f\n", pi);

    printf("\nInforme os novos dados: \n");
    scanf("%i", &idade);
    getchar(); // ler uma tecla limpa
    scanf("%c", &tecla);
    getchar(); // ler uma tecla limpa
    scanf("%f", &nota);
    // scanf("%f", &pi); nao pode, ja que e uma variavel

    printf("Os novos valores das variaveis: \n");
    printf("idade = %i\n", idade);
    printf("tecla = %c\n", tecla);
    printf("nota = %.2f\n", nota);


    return 0;
}