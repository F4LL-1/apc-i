#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main()
{

    struct biblioteca_t
    {
        char livro[61];
        int data_de_lancamento;
        long long int codigo_do_livro;
        enum
        {
            romance,
            acao,
            ficcao,
            aventura
        } genero;
        char autor[61];
    }; struct biblioteca_t biblioteca[5];

    int menu = 0;

    do
    {

        printf("-------------------------------------");
        printf("            Biblioteca               ");
        printf("-------------------------------------");
        printf("1 - Cadastrar um livro");
        printf("2 - Procurar um livro");
        printf("3 - Ver livros disponíveis");
        printf("4 - Sair");
        printf("-------------------------------------");
        printf("Selecione uma das opções -> ");
        scanf("%i", &menu);
        while (getchar() != '\n');


        switch (menu)
        {
        case 1:
        {
            printf("Informe o nome do livro: ");
            fgets(biblioteca.livro, sizeof(biblioteca.livro), stdin);
        }
        break;
        }

    } while (menu != 5);

    return 0;
}