#include "main.h"

/**
  * print_alphabet - Print the alphabet in lowercase.
  * Description: 'print_alphabet(void)'
  * Return: void
  */

void print_alphabet(void)
{
	char i;

	for  (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
