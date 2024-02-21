#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_create - function that creates a hash table
 * @size: is the size of the array
 *
 * Return: NULL or newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	if (table == NULL)
	{
		return (NULL);
	}

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	table->size = size;

	return (table);
}
