#include "main.h"

/**
 * _puts_recursion - this function prints a string with recursion
 * @s: Pointer to the string
 * Return: Always 0 (Successful)
 * Failed: -1
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
