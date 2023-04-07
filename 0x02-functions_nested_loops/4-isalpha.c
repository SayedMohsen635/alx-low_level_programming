#include "main.h"

/**
 * _isalpha - The function checks if the paramater is a character or not
 * @c: Character
 * Return: 1 or 0
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
