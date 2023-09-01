#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits - function returns the number of bits you would
 * need to flip to get one number to another
 * @n: number of bits
 * @m: number of bits to be flipped
 * Return: fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;

	unsigned int i = 0;

	while (xor > 0)
	{
		if (xor & 1)
		{
			i++;
		}
		xor >>= 1;
	}

	return (i);
}
