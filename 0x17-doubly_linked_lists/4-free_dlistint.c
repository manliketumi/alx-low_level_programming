#include "lists.h"
/**
 * free_dlistint - function that frees a list
 * @head: pointer of the parameter
 *
 * Return: the freed list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
