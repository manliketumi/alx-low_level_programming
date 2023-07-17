#include <stdio.h>
/**
  *main - prints lowercase in reverse
  *followed by new line
  *Return: always 0
  */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
