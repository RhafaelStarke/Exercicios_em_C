#include <stdio.h>

int main ()
{
    int dia, mes, ano, idade;
    int diaAtual, mesAtual, anoAtual;

    printf ("Data do seu nascimento: \n");
    printf ("Dia: \n");
    scanf (" %d", &dia);
    printf ("Mês: \n");
    scanf (" %d", &mes);
    printf ("Ano: \n");
    scanf (" %d", &ano);
    
    printf ("\n\nData atual: \n");
    printf ("Dia: \n");
    scanf (" %d", &diaAtual);
    printf ("Mês: \n");
    scanf (" %d", &mesAtual);
    printf ("Ano: \n");
    scanf (" %d", &anoAtual);

    if ((diaAtual >= dia) && (mesAtual >= mes));
    {
        idade = anoAtual - ano;
        printf ("Idade: %d \n", idade);
        if (idade > 16)
        {
            printf ("Tem direito ao voto!");
        }
        else
        {
            printf ("Ainda não tem direito ao voto!");
        }
    }
    else 
    {
        idade = (anoAtual - ano) - 1;
        printf ("Idade: %d \n", idade);
        if (idade > 16)
        {
            printf ("Tem direito ao voto!");
        }
        else
        {
            printf ("Ainda não tem direito ao voto!");
        }
    }

    return 0;