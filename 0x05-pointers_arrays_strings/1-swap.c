#include "main.h"
/**
 * swap_int -  function that swaps the values of two integers
 * @a: pointer of the first integer
 * @b: pointer of the second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	if (a != NULL && b != NULL)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}
}
