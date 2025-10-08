#include <stdio.h>

int main()
{

    // de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%
    float produto;
    printf("Digite o valor do produto: \n");
    scanf("%f", &produto);

    float desconto1 = produto - (produto * 0.01);
    float desconto2 = produto - (produto * 0.05);
    float desconto3 = produto - (produto * 0.10);

    if (produto <= 100)
    {

        printf("O valor do produto, com desconto eh de: R$%.2f", desconto1);
    }
    else if((produto >= 100.01) && (produto <= 500.00))
        {
            printf("O valor do produto, com desconto eh de: R$%.2f", desconto2);
        }
    else
    {
        printf("O valor do produto, com desconto eh de: R$%.2f", desconto3);
    }

    return 0;
}