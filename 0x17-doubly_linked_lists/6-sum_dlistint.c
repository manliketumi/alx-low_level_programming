#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data of list
 * @head: the pointer of the parameter
 *
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		i += current->n;
		current = current->next;
	}
	return (i);
}
