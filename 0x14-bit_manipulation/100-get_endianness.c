#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_endianness - function checks the endianness
 *
 * Return: 0 if big endian or 1 if small
 */

int get_endianness(void)
{
	int num = 1;

	char *ptr = (char *)&num;

	return (*ptr);
}
