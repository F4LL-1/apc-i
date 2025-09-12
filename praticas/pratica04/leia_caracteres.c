#include <stdio.h>
int main()
{

    char tecla;

    printf("Digite uma tecla: ");
    scanf("%C", &tecla);
    printf("A tecla digitada foi %C\n", tecla);
    
    getchar();
    char nome[31];

    printf("Digite seu nome: ");
    scanf("%[^\n]s", nome);
    printf("Voce digitou: %s\n", nome); 

    return 0;
}