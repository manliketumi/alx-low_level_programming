#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function returns number of elements
 * in linked listint_t list
 * @h: pointer to the list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
