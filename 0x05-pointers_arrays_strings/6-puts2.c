#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 * @str: to print character from string
 * Return: void
 */

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
