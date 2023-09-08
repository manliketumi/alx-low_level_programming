#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 1024
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array value
 * Return: 1 on success
 */

int main(int argc, char *argv[])
{
	int file_description_from, file_description_to, bytes_read, bytes_written;

	char buffer[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_description_from = open(argv[1], O_RDONLY);

	if (file_description_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[1]);
		exit(98);
	}

	file_description_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (file_description_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_description_from);
		exit(99);
	}

	while ((bytes_read = read(file_description_from, buffer, BUFSIZE)) > 0)
	{
		bytes_written = write(file_description_to, buffer, bytes_read);

		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_description_from);
			close(file_description_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_description_from);
		close(file_description_to);
		exit(98);
	}

	if (close(file_description_from) == -1 || close(file_description_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_description %d\n", (close(file_description_from) == -1) ? file_description_from : file_description_to);
		exit(100);
	}

	return (0);
}
