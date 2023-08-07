#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: a string
 * @c: character that returns
 * Return: a pointer to the occurrence of the first character
 */

char *_strchr(char *s, char c)
{
	int t;

	while (1)
	{
		t = *s++;
		if (t == c)
		{
			return (s - 1);
		}
		if (t == 0)
		{
			return (NULL);
		}
	}
}
