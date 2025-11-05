#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(){

    char string [11], maiusculo[11], minusculo[11];

    printf("insira a string: ");
    scanf("%s", string);

    memset(maiusculo, '\0', sizeof(maiusculo));
    memset(minusculo, '\0', sizeof(minusculo));

    for(int i=0; i<strlen(string); i++) 
    {
        maiusculo[i] = toupper(string[i]);
        
}












    return 0;   
}