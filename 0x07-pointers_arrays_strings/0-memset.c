#include "main.h"
/**
 * _memset - fills memory constant byte
 * @s: bytes of the pointed memory
 * @b: with constant byte
 * @n: fills the first
 * Return: pointer to results s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
