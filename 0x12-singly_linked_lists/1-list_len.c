#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * list_len - function that return number of elements
 * in a linked list_t list
 * @h: a pointer to head
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
