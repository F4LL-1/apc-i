#include <stdio.h>

int main(){

    int numero, fatorial;
    fatorial = 1;
    scanf("%i", &numero);

    for(int i = numero; i>0; i--){

        fatorial = fatorial * i;
        
    }

    
    printf("%i\n", numero);
    printf("%i\n", fatorial);



    return 0;
}