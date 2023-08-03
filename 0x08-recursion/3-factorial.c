#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 * @n: string that returns factorial
 *
 * Return: -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
