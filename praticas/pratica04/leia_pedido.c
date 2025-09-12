#include <stdio.h>
int main()
{   
    char produto[21];
    int quantidade;
    float valor;

    scanf("%s", &produto);
    scanf("%i", &quantidade);
    scanf("%f", &valor);

    printf("==============================\n");
    printf("%20s\n", "P E D I D O");
    printf("==============================\n");

    printf("%s %9s %9s\n", "Produto", "Qtd", "Valor");
    printf("%s %8.3i %9.2f\n",produto, quantidade, valor);
    printf("==============================\n");
    return 0;
}