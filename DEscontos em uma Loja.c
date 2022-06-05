#include <stdio.h>
#include <stdbool.h>

int main()
{
    int cod;
    float valor, valor_desconto;

    printf ("Qual o código do produto? \n");
    scanf (" %d", &cod);
    printf ("Qual o valor do produto? \n");
    scanf (" %f", &valor);

    switch (cod){
        case 33: valor_desconto = valor - valor * 0.1;
                 printf ("Você recebeu 10%% de desconto! \n");
                 printf ("De R$ %.2f por R$ %.2f \n", valor, valor_desconto);
                 break;
        case 77: valor_desconto = valor - valor * 0.2;
                 printf ("Você recebeu 20%% de desconto! \n");
                 printf ("De R$ %.2f por R$ %.2f \n", valor, valor_desconto);
                 break;
        case 230: if (valor > 100){
                      valor_desconto = valor - valor * 0.3;
                      printf ("Você recebeu 30%% de desconto! \n");
                      printf ("De R$ %.2f por R$ %.2f \n", valor, valor_desconto);
                      break;}
                  else{
                      valor_desconto = valor - valor * 0.25;
                      printf ("Você recebeu 25%% de desconto! \n");
                      printf ("De R$ %.2f por R$ %.2f \n", valor, valor_desconto);
                      break;}
        default:{
                printf ("Código inválido! \n");
                break;}
    }

    return 0;
}

