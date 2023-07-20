#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a character to the standard output
 * print_numbers -  print the numbers from 0 to 9
 *
 * Return: always 0
 */

void print_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
