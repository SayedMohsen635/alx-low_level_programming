#include "main.h"

/**
 * _strlen_recursion - this function prints the length of a string
 * @s: Pointer to the string
 * Return: Always 0 (Successful)
 * Failed: -1
 */

int _strlen_recursion(char *s)
{
	int length = 0;
	
	if (*s != '\0')
	{
		length += _strlen_recursion(s + 1) + 1;
	}

	return length;
}
