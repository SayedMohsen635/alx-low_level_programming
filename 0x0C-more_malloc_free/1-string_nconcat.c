#include "main.h"

/**
 * string_nconcat - The function concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: integer
 * Return: pointer to allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1Length, s2Length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1Length = 0; s1Length != '\0'; s1Length++)
	;
	for (s2Length = 0; s2Length != '\0'; s2Length++)
	;
	str = malloc(s1Length + n + 1);
	if (str == 0)
		return (NULL);
	for (i = 0; i < s1Length; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];
	str[i] = '\0'
	return (str);
}
