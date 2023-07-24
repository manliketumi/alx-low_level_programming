#include "main.h"
/**
 * _strlen -  function that returns the length of a string
 * @s: pointer of the string
 *
 * Return: len of the string
 */

int _strlen(char *s)
{
	int len = 0;

	if (s != NULL)
	{
		while (*s != '\0')
		{
			len++;
			s++;
		}
	}
	return (len);
}
