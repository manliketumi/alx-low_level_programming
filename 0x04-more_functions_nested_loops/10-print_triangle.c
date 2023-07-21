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

	for (t = 1; t <= size; t++)
	{
		for (u = 0; u < size; u++)
		{
			_putchar(' ');
		}
		for (v = 0; v < t; v++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
