#include "main.h"
int check(char *s, int start, int end, int mod);
int last_index(char *s);

/**
 * last_index - returns the last index of the string even if null
 * @s: Pointer to string
 * Return: integer number
 */

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += last_index(s + 1) + 1;
	}
	return (n);
}

/**
 * is_palindrome - this function returns if the string is palindrome or not
 * @s: Pointer to string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker for palindrome
 * @s: Pointer to string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @mod: integer number
 * Return: 1 or 0
 */

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
