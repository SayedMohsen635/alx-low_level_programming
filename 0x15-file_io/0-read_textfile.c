#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: pointer to char
 * @letters: number of letters
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t data;
	int fileVal;
	char buffer[BUFF_SIZE * 8];

	if (!filename || !letters)
		exit(1);
	fileVal = open(filename, O_RDONLY);
	if (fileVal == -1)
		exit(1);
	data = read(fileVal, &buffer[0], letters);
	data = write(1, &buffer[0], data);
	close(fileVal);
	return (data);
}
