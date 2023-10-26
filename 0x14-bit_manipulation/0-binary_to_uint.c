#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts number to unsigned integer
 * @b: pointer of a string
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	size_t i = 0;
	{
		if (b == NULL)
			return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != 0 && b[i] != '1')
		{
			return (0);
		}
		count = count * 2 + (b[i] != '0');
		i++;
	}
	return (count);
}
