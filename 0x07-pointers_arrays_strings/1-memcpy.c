#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copies memory area
 * @dest: return of memory
 * @src: bytes from memory area
 * @n: function copies
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
