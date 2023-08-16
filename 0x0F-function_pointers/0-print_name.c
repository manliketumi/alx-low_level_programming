#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_name - function that print name
 * @name: the name to be printed
 * @f: a pointer to a function that takes no parameters
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
