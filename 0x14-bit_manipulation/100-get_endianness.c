#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function that checks endianness
 *
 * Return: 0 if big or 1 if small
 */
int get_endianness(void)
{
	unsigned int num = 0x01;

	unsigned char *byte_ptr = (unsigned char *)&num;

	if (*byte_ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
