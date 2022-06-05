#include <stdio.h>
#include <stdbool.h>

int main()
{
    float n1, n2, n3, media;

    printf ("Digite a nota 1 do aluno: \n");
    scanf (" %f", &n1);
    printf ("Digite a nota 2: \n");
    scanf (" %f", &n2);
    printf ("A nota 3: \n");
    scanf (" %f", &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 6)
    {
        printf ("\n\nCandidato aprovado! \n");
    }
    else if ((media >= 4) && (media  < 6))
    {
        printf ("Candidato está de recuperação! \n");
    }
    else 
    {
        printf ("\n\nCandidato reprovado! \n");
    }

return 0;
}

