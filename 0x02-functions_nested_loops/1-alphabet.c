#include "main.h"

/**
 * print_alphabet - The function is used to print all
 * alphabets from A to Z
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		printf("%c", ch);
	}
	printf("\n");
}
