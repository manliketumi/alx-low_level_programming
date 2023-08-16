#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for integer
 * @array: the array to be iterated
 * @size: the size of an array
 * @cmp: pointer to a function used to compare values
 * Return: if size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
