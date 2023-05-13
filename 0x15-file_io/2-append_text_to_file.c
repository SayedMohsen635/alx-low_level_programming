#include "main.h"

/**
 * strLength - returns length of string
 * @str: string
 * Return: number of chars in string
 */

int strLength(char *str)
{
	int num = 0;

	if (!str)
		return (0);
	while (*str++)
		num++;
	return (num);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file
 * @text_content: pointer to char
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileVal;

	if (!filename)
		return (-1);
	if (filename && !text_content)
		return (1);
	fileVal = open(filename, O_WRONLY | O_APPEND);
	if (fileVal == -1)
		return (-1);
	if (write(fileVal, text_content, strLength(text_content)) == -1);
		return (-1);
	close(fileVal);
	return (1);
}
