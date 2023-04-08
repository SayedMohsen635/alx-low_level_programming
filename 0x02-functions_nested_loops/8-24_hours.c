#include "main.h"

/**
 * jack_bauer - The function prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59
 * Return: 1 or 0
*/

void jack_bauer(void)
{
	int i = j = 0;

	while (i < 24)
	{
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
