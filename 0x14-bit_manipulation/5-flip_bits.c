#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function return number of you would need to flip
 * to get from one number to another
 * @n: number of bits
 * @m: number of bits to be flipped
 * Return: flipped bits
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
