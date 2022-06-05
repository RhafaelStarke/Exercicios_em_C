#include <stdio.h>
#include <stdbool.h>

int main()
{
    float altura, pesoId, pesoMasc, pesoFem;
    char genero;

    printf ("Vamos ver o peso ideal, entre com seus dados. \n");
    printf ("Altura: \n");
    scanf (" %f", &altura);
    printf ("Gênero: M/F \n");
    scanf (" %c", &genero);

    if ((genero == 'm') || (genero == 'M'))
    {
        pesoMasc = (72.6 * altura) - 58;
        printf ("\n\nO peso ideal de acordo com seus dados seria %.1f kg. \n", masc);
    }
    else if ((genero == 'f') || (genero == 'F'))
    {
        pesoFem = (62.1 * altura) - 44.7;
        printf ("\n\nO peso ideal de acordo com os seus dados seria %.1f kg. \n", fem);
    }
    else
    {
        printf ("\n\nInicial de genero não identificada! \n");
    }

return 0;
}

