#include "main.h"
#include <stdio.h>
/**
 * get_bit - functio n return the value of the bit at a given index
 * @n: number of bit
 * @index: the starting of the bit
 * Return: the value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
return ((n >> index) & 1);
}
