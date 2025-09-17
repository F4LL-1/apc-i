#include <stdio.h>
#include <math.h> //biblioteca de matematica

int main()
{

float media = 4.9f;
float falta = 0.25f;

int operador_E = media >= 5.0 && falta <= 0.25f;
printf("passei? %i\n", operador_E);

int operador_OU = media >= 5.0f || falta <= 0.25f;
printf("Passei? %i\n", operador_OU);

int operador_NAO = !(media >= 5.0f);
printf("Passeo? %i\n", operador_NAO);

const double PI = 3.1415;
double raiz_quadrada_de_2 = sqrt(2);
double potencia_de_3_elevado_a_2 = pow(3,2);
double logaritimo_base_10 = log10(2);
double exponencial = exp(2);
double cosseno_90 = cos(90 / (PI * 180));

printf("%.2f\n", raiz_quadrada_de_2);
printf("%.0f\n", potencia_de_3_elevado_a_2);
printf("%.2f\n", logaritimo_base_10);
printf("%.2f\n", exponencial);
printf("%.2f\n", cosseno_90);

// Precedencia
// 0. ()
// 1. Preferencia *, /, %
// 2. + e -

int expressao1 = 2 - 5 / 3 * 4 + 1;
int expressao2 = 2 - 5 / (3 * 4) + 1;

printf ("O resultado da expressão 1 e: %i\n", expressao1);
printf ("O resultado da expressão 2 e: %i\n", expressao2);

return 0;

}