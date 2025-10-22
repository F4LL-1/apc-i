#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    system("clear"); // limpar o terminal
    setlocale(LC_ALL, "");
    int opcao = 0;

    while (opcao != 3)
    {
        system("clear"); // limpar o terminal
        printf("-----------------------\n");
        printf("    M E U  J O G O     \n");
        printf("-----------------------\n");
        printf("  1 - Novo jogo        \n");
        printf("  2 - Ver ranking      \n");
        printf("  3 - Sair             \n");
        printf("-----------------------\n");
        printf("Escolha uma opção =>  ");
        scanf("%i", &opcao);
        while (getchar() != '\n')
            ; // limpar buffer

        switch (opcao)
        {
        case 1:
        { system("clear");
            char nome[30];
            printf("Entre com o seu nome: ");
            fgets(nome, sizeof(nome), stdin);
            printf("Olá, %s");  
            printf("Pressione ENTER para começar o jogo\n");
            getchar();
            //...
        }
        break;
        case 2:
        { /* code */
        }
        break;
        case 3:
            printf("Até logo!\n");
            break;

        default:
            printf("Opção inválida! Pressione ENTER.\n");
            getchar();
            break;
        }
    }

    return 0;
}