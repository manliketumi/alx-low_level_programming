#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - function creates a file
 * @filename: the name of the file to be created
 * @text_content: terminated string to write the file
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_result = write(file_descriptor, text_content, strlen(text_content));
		if (write_result == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
