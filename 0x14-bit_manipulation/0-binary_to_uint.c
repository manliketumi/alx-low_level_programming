#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts number to unsigned integer
 * @b: pointer of a string
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int power = 0;
if (b == NULL)
{
return (0);
}

while (*b != '\0')
{
if (*b != '0' && *b != '1')
{
return (0);
}

if (*b == '1')
{
result |= (1 << power);
}

power++;
b++;
}

return (result);
}
