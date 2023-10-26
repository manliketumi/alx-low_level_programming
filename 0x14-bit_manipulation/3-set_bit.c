#include "main.h"
#include <stdio.h>
/**
 * set_bit - function that set value of bit to 1 at given index
 * @n: pointer of set bit
 * @index: value that is starting from 0
 * Return: 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1UL << index);
	return (-1);
}
