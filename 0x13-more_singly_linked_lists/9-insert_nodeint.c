#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function inserts new node
 * at given position
 * @head: double pointer of the list
 * @idx: the index of the node where it should be added
 * @n: the value of the list
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *new_node, *prev_node = NULL, *current = *head;

	while (current != NULL)
	{
		if (index == idx)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = current;

			if (prev_node != NULL)
				prev_node->next = new_node;
			else
				*head = new_node;
			return (new_node);
		}

		prev_node = current;
		current = current->next;
		index++;
	}

	return (NULL);
}
