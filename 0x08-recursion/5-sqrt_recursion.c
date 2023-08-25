#include "main.h"
#include <math.h>
/**
 * natural_square_root - to check if its natural
 * @a: first int type
 * @b: second int type
 * Return: success
 */

int natural_square_root(int a, int b)
{
	if (a == (b * b))
		return (b);
	if (b * b > a)
		return (-1);
	return (natural_square_root(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root
 * of a number
 * @n: string
 * Return: number with no sqrt return -1
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n  < 1)
		return (-1);
	return (natural_square_root(n, 1));
}
