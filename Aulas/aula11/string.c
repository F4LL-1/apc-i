#include <stdio.h>
#include <string.h> //Manipulação de strings

int main(){


    char nome [30];

    nome [0] = 'J';
    nome [1] = 'O';
    nome [2] = 'S';
    nome [3] = 'E';
    nome [4] = '\0';
        printf("Seu nome: %s\n", nome);

    for (int i = 0; i < 30; i++)
    {
        nome[i] = 'A';
    }
        printf("Seu nome: %s\n", nome);
    

    
 

    nome [0] = 'J';
    nome [1] = 'O';
    nome [2] = 'S';
    nome [3] = 'E';
    nome [4] = '\0';

    printf("Seu nome: %s\n", nome);


    printf("Seu nome: ", nome);
    fgets(nome, sizeof(nome), stdin);
    printf("Seu nome: %s", nome);



    //funcoes do string.h

    //Preenche uma string com um caractere
    memset(nome, 'A', sizeof(nome));
    printf("Seu nome: %s\n", nome);
    memset(nome, 'B', 10);
    nome[10] = '\0';
    printf("Seu nome: %s\n", nome);


    //Copia uma string
    strcpy(nome, "Reginaldo");
    printf("Seu nome: %s\n", nome);


    //Concatena duas strings
    strcat(nome, " Jose");
    printf("Seu nome: %s\n", nome);


    //Tamanho da string
    printf("Seu nome tem: %i caracteres\n", strlen(nome));

    //Comparar strings
    printf("As strings '%s' e '%s' sao iguais? %i\n", nome, "Jose", strcmp(nome, "Jose"));
    printf("As strings '%s' e '%s' sao iguais? %i\n", "Jose", nome, strcmp("Jose", nome));
    printf("As strings '%s' e '%s' sao iguais? %i\n", "Reginaldo Jose", nome, 
    strcmp("Reginaldo Jose", nome));

    //Procurar um caracter em uma string
    printf("A string '%s' possui a letra 'o'? %i\n", nome, strchr(nome, 'o'));

    printf("A string '%s' possui a letra 'u'? %i\n", nome, strchr(nome, 'u'));
    


    //Procurar uma string em uma string

    printf("A string '%s' possui a 'ose'? %s\n", nome, strstr(nome, "ose"));
    printf("A string '%s' possui a string 'Silva'? %s\n", nome, strstr(nome, "Silva"));







    return 0;
}