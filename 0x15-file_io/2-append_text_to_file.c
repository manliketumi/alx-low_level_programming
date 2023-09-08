#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * append_text_to_file - function that appends text at end of a file
 * @filename: pointer to a file name
 * @text_content: terminated string
 * Return: 1 on success or -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t len, w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);
	len = strlen(text_content);
	w = write(file_descriptor, text_content, len);

	close(file_descriptor);

	if (w == len)
		return (1);
	return (-1);
}
