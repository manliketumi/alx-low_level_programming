#include "main.h"
/**
 * reset_to_98 - Updates the value printed to by
 * a pointer to 98
 * @n: Pointer to an integer its value need to be updated
 * Return: void
 */

void reset_to_98(int *n)
{
	if (n != NULL)
	{
		*n = 98;
	}
}
