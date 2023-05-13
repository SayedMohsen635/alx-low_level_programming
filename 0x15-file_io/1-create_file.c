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
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: pointer to char
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fileVal;
	ssize_t data = 0;
	ssize_t length = strLength(text_content);

	if (!filename)
		return (-1);
	fileVal = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fileVal == -1)
		return (-1);
	if (length)
		data = write(fileVal, text_content, length);
	close(fileVal);
	if (data == length)
		return (1);
	else
		return (-1);
}
