#include "main.h"

/**
 * _print_rev_recursion - this function prints a string in reverse
 * @s: Pointer to string
 * Return: Always 0 (Successful)
 * Failed: -1
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	_puts_recursion(s + 1);
	_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
