#include <stdio.h>
#include <string.h>

int main(){
    
    char palavra_1[11], palavra_2[11];

    printf("Insira a palavra 1: ");
    scanf("%s", palavra_1);

    printf("Insira a palavra 2: ");
    scanf("%s", palavra_2);

    if (strcmp(palavra_1, palavra_2) >= 0)
    {
    printf("Palavra 1: %s, palavra 2: %s", palavra_2, palavra_1);
        /* code */
    }else
    {
        /* code */
    printf("Palavra 1: %s, palavra 2: %s", palavra_1, palavra_2);
    }
    
    


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;}