#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concentrate on two string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s1
 * Return: NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *siri;
	unsigned int a, b, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = strlen(s1);
	b = strlen(s2);

	if (n >= b)
		n = b;

	siri = malloc(a + n + 1);
	if (siri == NULL)
	{
		return (NULL);
	}
		for (i = 0; i < a; i++)
			siri[i] = s1[i];

	{
		for (j = 0; j < n; j++)
			siri[i + j] = s2[j];
	}
	siri[i + j] = '\0';

	return (siri);
}
