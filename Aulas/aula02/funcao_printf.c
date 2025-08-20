#include <stdio.h>
#include <locale.h> //biblioteca de idiomas


int main(){
    setlocale (LC_ALL,""); //usa o idioma portugues

    printf ("---\n\n");
    printf ("Oi\n\n");
    printf ("---\n\n");

    printf ("--------------------\n");
    printf (" N O T A L E G A L  \n");
    printf ("--------------------\n");
    printf ("Caderno    x1  10.00\n");
    printf ("Caderno    x1  10.00\n");
    printf ("Caderno    x1  10.00\n");
    printf ("--------------------\n");
    printf ("Total....:     22.50\n");
    

    //especificador de formatos
    //%c - imprime um caracter
    //%s - imprime um texto (string)
    //%i - imprime um inteiro
    //%f - imprime um flutuante (fracionario)
    

    printf ("\nCaderno    1  10.00\n");
    printf ("\n%-10s %03i %6.2f\n", "caderno", 1, 10.00);
    printf ("\n%-10s %03i %6.2f\n", "lápis", 1, 5.00);
    

    // \n quebra a linha
    // - após a porcentagem, determina que o espaço deve ser feito do outro lado
    // 0 após a porcentagem e antes de um inteiro, adiciona zeros até atingir 3 caracteres
    
    return 0;
}   