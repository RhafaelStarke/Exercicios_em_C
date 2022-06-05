#include <stdio.h>

int main()
{
	int notaCand[100];
	float porcem[20];
	
	for (int i = 0; i < 100 ; i++)
	{
		printf ("Candidato %d: \n", i+1);
		scanf (" %d", &notaCand[i]);
		if ((notaCand[i] < 0) || (notaCand[i] > 20))
		{
			while ((notaCand[i] < 0) || (notaCand[i] > 20))
			{
				printf ("Candidato %d: \n", i+1);
				scanf (" %d", &notaCand[i]);
			}
		}
	}
	
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (i == notaCand[j])
			{
				porcem[i] = porcem[i] + 1.0;
			}
		}
	}
	
	for (int i = 0; i < 21; i++)
	{
		printf ("Nota %d: %.1f %% \n", i, porcem[i]);
	}
	
	return 0;
}
