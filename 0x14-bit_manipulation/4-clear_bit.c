#include "main.h"
#include <stdio.h>
/**
 * clear_bit - function that sets value of a bit
 * @n: pointer to the number of bit
 * @index: starting line up
 * Return: 1 at success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
