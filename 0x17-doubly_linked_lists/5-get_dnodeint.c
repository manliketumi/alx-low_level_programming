#include "lists.h"
/**
 * get_dnodeint_at_index - function returns the nth node
 * @head: the pointer of the parameter
 * @index: is the index of the node
 *
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
