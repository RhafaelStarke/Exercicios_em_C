#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n1, n2, n3;

    printf ("Digite o 1° número: \n");
    scanf (" %d", &n1);
    printf ("Digite o 2° número: \n");
    scanf (" %d", &n2);
    printf ("Digite o 3° número: \n");
    scanf (" %d", &n3);

    if ((n1  > n2) && (n1 > n3))
    {
        printf ("\n\nO maior entre os digitados foi %d. \n", n1);
    }
    else if ((n2 > n1) && (n2 > n3))
    {
        printf ("\n\nO maior entre os digitados foi %d. \n", n2);
    }
    else 
    {
        printf ("\n\n O maior entre os digitados foi %d. \n", n3);
    }

return 0;
}

