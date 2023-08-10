#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the number of bytes to allocator
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *malloc_check = malloc(b);

	if (malloc_check == NULL)
	{
		exit(98);
	}
	return (malloc_check);
}
