/*acima de 40º é "Muito quente"; acima de 30º e abaixo de 40º é "Quente";
acima de 20º e abaixo de 30º é "Agradável"; e abaixo de 20º é "Frio".*/

#include <stdio.h>

int main()
{

    float temperatura;

    printf("Digite a temperatura: \n");
    scanf("%f", &temperatura);

    if (temperatura >= 40.00f)
    {

        printf("Muito quente");
    }
    else if ((temperatura >= 30.00f) && (temperatura < 40.00f))
    {
        printf("Quente");
    }
    else if ((temperatura >= 20.00f) && (temperatura < 30.00f))
    {
        printf("Agradavel");
    }
    else 
    {
    
        printf("Frio");
    }

    return 0;
}