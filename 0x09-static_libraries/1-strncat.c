#include "main.h"
/**
 * _strncat - unction that concatenates two strings
 * @src: pointer to the source string
 * @dest: destination string
 * @n: max numeber of bytes to be used from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_prt = dest;

	while (*dest_prt != '\0')
	{
		dest_prt++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_prt = *src;
		dest_prt++;
		src++;
		n--;
	}
	*dest_prt = '\0';

	return (dest);
}
