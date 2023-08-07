#include "main.h"
/**
* _abs - Computers the absolute value of a number
* of integer
*
* @i: input number as an integer
*
* Return: absolute value
*/

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
