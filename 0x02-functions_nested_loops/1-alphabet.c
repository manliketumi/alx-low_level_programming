#include "main.h"
/**
  *main - entry point
  *Description: 'prints the alphabet in lowercase'
  *Return: always 0 (success)
  */
int main(void)
{
	int i;

	for  (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
