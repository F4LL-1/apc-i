#include <stdio.h>
#include <string.h>

int main(){

    char frase[31];

    printf("Insira a frase: ");
    scanf("%s", frase);
    getchar();

    char letra;
    printf("Insira a letra: ");
    scanf("%c", &letra);
    getchar();

    int quantidade = 0;

    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase [i] == letra)
        {
            quantidade ++;
        }
        
    }
    

    if (quantidade > 0)
    {
        /* code */
    printf("%i", quantidade);
    }else
    {
        /* code */
    printf("A frase nao contem a letra!");
    }
    
 

return 0;
}