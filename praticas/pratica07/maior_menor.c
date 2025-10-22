#include <stdio.h>

int main(){

    int numero, maior, menor;
    scanf ("%i", &numero);
    
    maior = numero;
    menor = numero;

    
    
    while (numero != 0)
    {
        if (numero > maior){

            maior = numero;
        }
        if (numero < menor)
        {
            menor = numero;
        }

        scanf("%i", &numero);

        
        
    }
    
        printf("Valor maior %i\n", maior);
        printf("Valor menor %i\n", menor);



    return 0;
}