#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string to be copied
 * Return: dest value
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest_start);
}
