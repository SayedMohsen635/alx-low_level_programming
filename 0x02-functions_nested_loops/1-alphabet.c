#include "main.h"

/**
* Description: The print_alphabet function is used to print all alphabets from A to Z
*/

void print_alphabet(void)
{	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		printf("%c", ch);
	}
	printf("\n");
}
