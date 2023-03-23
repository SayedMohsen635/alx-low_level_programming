#include "main.h"

/**
	* Description: This function is used to print 
	*		all alphabets from A to Z
*/

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		printf("%c", ch);
	}
	printf("\n");
}
