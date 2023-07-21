#include "main.h"
/**
 * print_triangle -  function that prints a triangle
 * @size:  is the size of the triangle
 * Return: 0 or less
 */

void print_triangle(int size)
{
	int t, u, v;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (t = 0; t < size; t++)
	{
		for (u = size - t; u > 1; u--)
		{
			_putchar(32);
		}
		for (v = 0; v <= t; v++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
