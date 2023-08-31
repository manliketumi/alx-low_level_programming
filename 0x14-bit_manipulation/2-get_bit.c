#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - function returns the value of a bit at a given index
 * @n: number of bit
 * @index: is the index starting from 0 of the bit
 * Return: the value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
			return (-1);
	return ((n >> index) & 1);
}
