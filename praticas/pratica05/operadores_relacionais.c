#include <stdio.h>

int main()
{

    int numero1;
    int numero2;

    scanf("%i", &numero1);
    scanf("%i", &numero2);

    printf("A variavel %i e igual %i? %i\n", numero1, numero2, numero1 == numero2);
    printf("A variavel %i e diferente da %i? %i\n", numero1, numero2, numero1 != numero2);
    printf("%i e menor que %i? %i\n", numero1, numero2, numero1 < numero2);
    printf("%i e menor ou igual a %i? %i\n", numero1, numero2, numero1 <= numero2);
    printf("%i e maior que %i? %i\n", numero1, numero2, numero1 > numero2); 
    printf("%i e maior ou igual a %i? %i\n", numero1, numero2, numero1 >= numero2);


    return 0;
}