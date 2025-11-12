#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main()
{

    setlocale(LC_ALL, "");

    int leu_certo_cpf = 0;
    int menu = 0;
    int ultimo_cadastro_cpf = 0;
    int ultimo_cadastro_nome = 0;

    struct cadastro_t
    {
        long long int CPF[12];
        char Nome_completo[61];
    };
    struct cadastro_t cadastro[10];

    do
    {
        system("clear");
        printf("---------------------------------------\n");
        printf("%25s\n", "JUCA CALÇADOS");
        printf("---------------------------------------\n");
        printf("1 - Cadastro\n");
        printf("2 - Itens\n");
        printf("3 - Nota fiscal\n");
        printf("4 - Finalizar compra\n");
        printf("5 - Sair\n");
        printf("---------------------------------------\n");
        printf("Selecione uma opção -> ");
        scanf("%i", &menu);
        while (getchar() != '\n')
            ;

        switch (menu)
        {
        case 1:
        {
            system("clear");
            if (ultimo_cadastro_nome > 9)
            {
                printf("Excede o número de cadastros.");
                break;
            }
            if (ultimo_cadastro_cpf > 9)
            {
                printf("Excede o número de cadastros.");
                break;
            }

            {

                while (leu_certo_cpf == 0)
                {
                    while (getchar() != '\n');
                        
                    printf("Não e um numero! Tente novamente.\n");
                    printf("Entre com um numero: ");
                    leu_certo_cpf = scanf("%i", &leu_certo_cpf);
                }
                cadastro[ultimo_cadastro_nome].Nome_completo;
                printf("Nome completo: \n");
                int leu_certo = fgets(cadastro[ultimo_cadastro_nome].Nome_completo, sizeof(cadastro[ultimo_cadastro_nome].Nome_completo), stdin);
                ultimo_cadastro_nome++;
            }
            system("clear");

            {
                printf("CPF: ");
                cadastro[ultimo_cadastro_cpf].CPF;
                scanf("%li", &cadastro[ultimo_cadastro_cpf].CPF);
                ultimo_cadastro_cpf++;
            }
        }
        break;

        case 2:
        case 3:
        case 4:
        case 5:

        default:
            printf("Insira uma opção válida!");
            break;
        }

    } while (menu = !5);
    return 0;
}