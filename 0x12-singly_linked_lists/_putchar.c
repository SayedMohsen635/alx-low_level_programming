#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints the character c to stdout
 * @c: Character
 * Return: 1 or -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
