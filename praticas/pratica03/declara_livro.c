#include <stdio.h>

int main(){
  
    long long ISBN = 1234567890123L;  
    printf("ISBN: %lli\n", ISBN);

    int Paginas = 200;
    printf("Num. Paginas: %02i\n", Paginas);

    float preco = 1000.2;
    printf("preco: R$ %.2f\n", preco);
    
    int Publicado = 2025;
    printf("Publicado em: %i\n", Publicado);

    return 0;
}