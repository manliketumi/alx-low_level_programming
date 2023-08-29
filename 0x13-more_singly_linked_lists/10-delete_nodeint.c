#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at index of listint_t
 * @head: double pointer at the head of the list
 * @index: where the index of the node should be deleted
 * Return: 1 on success -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *tmp, *prev_node = NULL;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	while (tmp != NULL)
	{
		if (count == index)
		{
			if (prev_node != NULL)
				prev_node->next = tmp->next;
			else
				*head = tmp->next;
			free(tmp);
			return (1);
		}

		prev_node = tmp;
		tmp = tmp->next;
		count++;
	}
	return (-1);
}
