#include "main.h"
/**
  * read_textfile - function reads a file and print POSIX to standard input
  * @filename: name of file
  * @letters: number of letters
  * Return: 0 always
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	int fh, i, j;

	if (filename == NULL)
		return (0);

	fh = open(filename, O_RDONLY);
	if (fh == -1)
	{
		close(fh);
		return (0);
	}

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);

	i = read(fh, text, letters);
	if (i == -1)
	{
		free(text);
		close(fh);
		return (0);
	}

	j = write(STDOUT_FILENO, text, i);
	if (j == -1)
	{
		free(text);
		close(fh);
		return (0);
	}

	free(text);
	close(fh);
	return (i);
}
