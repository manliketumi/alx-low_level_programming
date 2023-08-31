#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - function set the value of a bit to 1
 * at a given index
 * @n: pointer of number
 * @index: is starter of bit that is set
 * Return: 1 if success or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1UL << index);
	return (1);
}
