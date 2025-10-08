#include <stdio.h>

int main()
{

    int opcao;
    int recarga;

    printf("---------------------\n");
    printf("    MENU PRINCIPAL   \n");
    printf("---------------------\n");
    printf("1 - CONSULTAR SALDO\n");
    printf("2 - FAZER RECARGA\n");
    printf("3 - OUVIR RECADOS\n");
    printf("4 - ULTIMA CHAMADA\n");
    printf("5 - ENCERRAR CHAT\n");
    printf("---------------------\n");

    printf("Escaolha uma opcao: ");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Seu saldo eh de R$10,00\n"); break;

    case 2:
        
        {printf("Escolha o valor da recarga: \n"); 
        
        printf("0 - Cancelar\n");
        printf("1 - R$10,00\n");
        printf("2 - R$50,00\n");
        printf("3 - R$100,00\n");
        printf("4 - R$150,00\n");
       
        scanf("%i", &recarga);
        
        switch (recarga)
        {
        case 0: 
        
            break;
        
        default:
            break;
        }
        
        }
        break;

    case 3:
        printf("Voce nao tem recados\n"); break;

    case 4:
        printf("A sua ultima chamada foi 9999-99999\n"); break;

    case 5:
        printf("Obrigado pelo seu contato\n"); break;

            
    default: ("Opcao invalida. Tente novamente.\n");
    }



    return 0;
}