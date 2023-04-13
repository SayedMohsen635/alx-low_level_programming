#include "main.h"

/**
 * _strlen - find length of the string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * argstostr - The function concatenates all the arguments of the program.
 * @ac: integer
 * @av: array of pointers
 * Return: pointer to char
*/

char *argstostr(int ac, char **av)
{
	int i, j, n, c;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, n++)
		n += _strlen(av[i]);

	s = malloc(sizeof(char) * n + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c++)
		{
			s[c] = av[i][j];
		}
		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
