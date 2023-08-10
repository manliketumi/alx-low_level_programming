#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concentrate on two string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s1
 * Return: NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *siri = s1;

	while (*siri != '\0')
	{
		siri++;
	}
	while (*s2 != '\0' && n > 0)
	{
		*siri = *s2;
		siri++;
		s2++;
		n--;
	}
	*siri = '\0';

	return (s1);
}
