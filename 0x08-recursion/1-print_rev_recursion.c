#include "main.h"

/**
 * _print_rev_recursion - this function prints a string
 *
 * Return: Always 0 (Successful)
 * Failed: -1
 */

void _puts_recursion(char *s)
{
        while(*s != '\0')
        {
                _putchar(*s);
                _puts_recirsion(s + 1);
        }
        _putchar('\n');
}
