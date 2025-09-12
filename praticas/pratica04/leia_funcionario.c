#include <stdio.h>

int main()
{

    int codigo;
    char nome[31];
    float salario;

    printf("Digite o codigo: ");
    scanf("%i", &codigo);
    getchar();

    printf("Digite o nome: ");
    scanf("%[^\n]s", &nome);
    getchar();

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Matricula \t\tNome \t\t\t\tSalario\n");
    printf("%04i \t\t\t%s \t\t%.2f", codigo, nome, salario);
    return 0;
}