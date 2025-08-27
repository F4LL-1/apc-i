#include <stdio.h>

int main(){

    printf("%-35s", "==================================");
    printf("\n%26s", "N O T A    L E G A L");
    printf("\n%-35s", "==================================");

    printf("\n%-13s \t%s \t%s", "Produto", "Qtd", "Valor Unit");
    printf("\n%-13s \t%s \t%s", "Camiseta", "002", "39.99");
    printf("\n%-13s \t%s \t%s", "Calca", "001", "19.99");
    printf("\n%-13s \t%s \t%s", "Meia Social", "003", "19.99");

    printf("\n%-35s", "==================================");
    printf("\n%-13s \t\t%s", "Total:", "229.85");


    return 0;
}