#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - returns the natural square root
 * of a number
 * @n: string
 * Return: number with no sqrt return -1
 */

int _sqrt_recursion(int n)
{
	if (n == '\0')
	{
		return (-1);
	}
	else
	{
		return (n * _sqrt_recursion(n + 1));
	}
}
