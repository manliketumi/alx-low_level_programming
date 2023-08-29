#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - function returns nth node of a linked
 * listint_t list
 * @head: pointer of the list
 * @index: the index of the node start with 0
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (nth == index)
			return (current);
		current = current->next;
		nth++;
	}

	return (NULL);
}
