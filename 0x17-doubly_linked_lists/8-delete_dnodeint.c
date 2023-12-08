#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: pointer of the parameter
 * @index: deleted node
 * Return: 1 on success or -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

	free(current);
	return (1);
}
