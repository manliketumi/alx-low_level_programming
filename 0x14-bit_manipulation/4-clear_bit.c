#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - function set value of a bit to 0
 * at given index
 * @n: pointer to number of bit
 * @index: that starting from 0 of the bit set
 * Return: 1 at success or -1 at error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
