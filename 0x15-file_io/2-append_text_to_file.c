#include "main.h"

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
	write(fileVal, text_content, sizeof(text_content) - 1)
		/* return (-1); */
	close(fileVal);
	return (1);
}
