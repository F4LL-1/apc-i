#include <stdio.h>

int main()
{

    float numero1, numero2;

    printf("Digite um numero\n");
    scanf("%f", &numero1);
    getchar();

    printf("Digite outro numero\n");
    scanf("%f", &numero2);
    getchar();

    char operacao;

    printf("Selecione qual sera a operacao:\n");
    printf(" 1 - soma\n 2 - subtracao\n 3 - divisao\n 4 - multiplicacao\n");

    scanf("%c", &operacao);
    getchar();

    switch (operacao)
    {
    case '1':
    {
        float soma = numero1 + numero2;
        printf("%.2f", soma);
        break;
    }
    case '2':
    {
        float subtracao = numero1 - numero2;
        printf("%.2f", subtracao);
        break;
    }
    case '3':
    {
        float divisao = numero1 / numero2;
        printf("%.4f", divisao);
        break;
    }
    case '4':
    {
        float multiplicacao = numero1 * numero2;
        printf("%.2f", multiplicacao);
        break;
    }

    default:
        printf("Escolha uma opcao valida.");
        break;
    }

    return 0;
}