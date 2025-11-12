#include <stdio.h>

int main()
{
    const int false = 0;
    const int true = 1;

    const int domingo = 1;
    const int segunda = 2;
    const int terca = 3;
    const int quarta = 4;
    const int quinta = 5;
    const int sexta = 6;
    const int sabado = 7;

    enum boolean_e
    {
        falso,
        verdadeiro
    };

    enum dias_e
    {

        dom = 1,
        seg,
        ter,
        qua,
        qui,
        sex,
        sab
    };

    int dia_da_semana;
    printf("Informe o dia entre 1 e 7: ");
    scanf("%i", &dia_da_semana);

    switch (dia_da_semana)
    {
    case dom:
        printf("Domingo\n");
        break;
    case seg:
        
        printf("Segunda\n");
    break;
    case ter:
        /* code */
        printf("Terca\n");
        break;
    case qua:
        /* code */
        printf("Quarta\n");
        break;
    case qui:
        /* code */
        printf("Quinta\n");
        break;
    case sex:
        /* code */
        printf("Sexta\n");
        break;
    case sab:
        /* code */
        printf("Sabado\n");
        break;
        
    default: printf("Dia invalido");
        break;
    }

    return 0;
}