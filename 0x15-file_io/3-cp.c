#include "main.h"

#define permissions (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - This program that copies the content of a file to another file
 * @argc: int
 * @argv: array of pointers
 * Return: 1 or 0
 */

int main(int argc, char **argv)
{
	int file_from = 0, file_to = 0;
	ssize_t bytes;
	char buffer[BUFF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]), exit(98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]), exit(99);
	/* Write Logic */
	while ((bytes = read(file_from, buffer, BUFF_SIZE)) > 0)
	{
		if (write(file_to, buffer, bytes) != bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			exit(99);
		}
	}
	/* Handle Read Logic Error*/
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to);
		exit(100);
	}
	return (0);
}
