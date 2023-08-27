#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: minimum value of an array
 * @max: maximum value of an array
 *
 * Return: if min > max return NULL
 */

int *array_range(int min, int max)
{
	int *array, size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
