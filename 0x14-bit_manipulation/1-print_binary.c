#include  "main.h"
#include <stdio.h>
/**
 * print_binary - function that print the binary rep of a number
 * @n: number of integer
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
