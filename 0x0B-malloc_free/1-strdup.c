#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string as parameter
 *
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int j, i;

	if (str == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (str[j] != '\0')
		j++;
	dup = malloc((j + 1) * sizeof(char));
	{
		if (dup == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i <= j; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
