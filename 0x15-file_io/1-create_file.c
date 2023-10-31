#include "main.h"
#include <string.h>
#include <sys/stat.h>
/**
 * create_file - function creates a file
 * @filename: name of the file to be created
 * @text_content: terminated string to write the file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fh, i = 0, j = 0;

	if (filename == NULL)
		return (-1);

	fh = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fh == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		j = write(fh, text_content, i);
		if (i != j)
			return (-1);
	}
	close(fh);
	return (1);
}
