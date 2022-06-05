#include <stdio.h>
#include <stdbool.h>

int main()
{
    float x, y, z;

    printf ("Entre os valores dos lados para verificar\n");
    printf("se é um triângulo e de que tipo: \n");
    printf ("Lado 1: \n");
    scanf (" %f", &x);
    printf ("Lado 2: \n");
    scanf (" %f", &y);
    printf ("Lado 3: \n");
    scanf (" %f", &z);

    if ((x > y + z) && (y > x + z) && (z > y + x))
    {
        if ((x == y) && (y == z))
        {
            printf ("De acordo com os valores inseridos, representam\n");
            printf ("um triângulo e é equilátero! \n");
        }
        else if ((x == y) || (y == z) || (z == x))
        {
            printf ("De acordo com os valores inseridos, representam\n");
            printf ("um triângulo e é um isósceles! \n");
        }
        else if ((x != y) && (y != z) && (z != x))
        {
            printf ("De acordo com os valores inseridos, representam\n");
            printf ("um triângulo e é escaleno! \n");
        }
    }
    else
    {
        printf ("De acordo com os valores inseridos, não\n");
        printf ("representam um triângulo! \n");
    }
    
return 0;
}

