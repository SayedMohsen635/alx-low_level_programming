#include "main.h"

/**
 * print_times_table - The function prints the n times table, starting with 0
 * @n: Integer
 * Return: Void
*/

void print_times_table(int n)
{
	int i, j, mult;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				mult = i * j;
				if (j == 0)
					printf("%d", mult);
				if (mult < 10 && j != 0)
				{
					printf(",   ");
					printf("%d", mult);
				}
				else if (mult >= 10 && mult < 100)
				{
					printf(",  ");
					printf("%d", mult);
				}
				else if (mult >= 100)
				{
					printf(", ");
					printf("%d", mult);
				}
			}
			printf("\n");
		}
	}
}
