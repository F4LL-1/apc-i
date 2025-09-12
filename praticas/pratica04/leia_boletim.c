#include <stdio.h>

int main()
{

    int matricula;
    float a1, a2, media;
    
    printf("Insira a matricula: ");
    scanf("%i", &matricula);
    getchar();

    printf("Insira a nota da A1: ");
    scanf("%f", &a1);
    getchar();
    
    printf("Insira a nota da A2: ");
    scanf("%f", &a2);
    getchar();

    media = (a1 + a2)/2;

    printf("Matricula \tA1 \tA2 \tMedia\n%08i \t%.1f \t%.1f \t%.1f", matricula, a1, a2, media);
    
    
    


    return 0;
}