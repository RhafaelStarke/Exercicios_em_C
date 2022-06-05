#include <stdio.h>

int main ()
{
    float salario, vendas, novoSalario;

    printf ("Entre com o salário fixo: \n");
    scanf (" %f", &salario);
    printf ("Entre com o total de vendas do mês: \n");
    scanf (" %f", &vendas);
    
    if ((vendas > 100) && (vendas <= 500))
    {
        novoSalario = salario + 500;
        printf ("Salario fixo: R$ %.2f \n", salario);
        printf ("Prêmio pelas vendas: R$ 500.00 \n");
        printf ("Salario total: R$ %.2f \n", novoSalario);
    }
    else if ((vendas > 500) && (vendas <= 750))
    {
        novoSalario = salario + 700;
        printf ("Salario fixo: R$ %.2f \n", salario);
        printf ("Prêmio pelas vendas: R$ 700.00 \n");
        printf ("Salario total: R$ %.2f \n", novoSalario);
    }
    else if (vendas > 750)
    {
        novoSalario = salario + 1000;
        printf ("Salario fixo: R$ %.2f \n", salario);
        printf ("Prêmio pelas vendas: R$ 1000.00 \n");
        printf ("Salario total: R$ %.2f \n", novoSalario);
    }
    else
    {
        printf ("Parabéns pelas vendas do mês! \n");
        printf ("Infelizmente não conseguiu alcançar o mínimo de pontos, se \n");
        printf ("esforce mais no próximo mês que conseguirá! \n");
    }
    
    return 0;
}