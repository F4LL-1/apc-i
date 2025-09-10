#include <stdio.h>

int main(){
    
    //Matrícula: Um código de identificação do aluno pode ter 8 dígitos.
    //Idade: Um número que representa a idade do aluno.
    //Altura: Um valor que representa a altura do aluno.
    //Peso: Um valor que representa o peso do aluno.
    //Sexo: Um valor que representa o sexo do aluno.

    int matricula = 12345678;
    printf("Matricula: %08i\n", matricula);

    int idade = 39;
    printf("Idade: %02i\n", idade);

    float altura = 1.90;
    printf("Altura: %.2f m\n", altura);

    float peso = 80.4;
    printf("Peso: %.2f kg\n", peso);

    char sexo = 'M';
    printf("Sexo: %c\n", sexo);






    return 0;
}