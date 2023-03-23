#include "main.h"

/**
* main - Entry point
* Description: The print_alphabet function is 
* used to print all alphabets from A to Z
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
