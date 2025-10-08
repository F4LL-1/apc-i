#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;


    printf("Digite o a\n");
    scanf("%i", &a);
    getchar();

    printf("Digite o b\n");
    scanf("%i", &b);
    getchar();

    printf("Digite o c\n");
    scanf("%i", &c);
    getchar();

    float delta = ((b*b)) - (4 * a * c);

    float x1, x2;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("o X1 eh: %f\n",x1);
    printf("o X2 eh: %f\n",x2);



    return 0;
}