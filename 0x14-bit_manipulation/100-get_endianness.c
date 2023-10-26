#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function that checks endianness
 *
 * Return: 0 if big or 1 if small
 */
int get_endianness(void)
{
	union
	{
		unsigned int value;
		unsigned char bytes[4];
	}
	u;

	u.value = 1;

	return (u.bytes[0] == 0x01);
}
