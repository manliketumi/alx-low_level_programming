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
	int file;
	
	struct stat st;
	{
	if (filename == NULL)
		return (-1);
	}
	if (stat(filename, &st) == 0)
	{
		if (truncate(filename, 0) != 0)
			return (-1);
	}
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	{
		if (file == -1)
			return (-1);
	}

	if (text_content != NULL)
	{
		ssize_t bytes_written = write(file, text_content, strlen(text_content));

		if ((bytes_written = strlen(text_content)))
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
