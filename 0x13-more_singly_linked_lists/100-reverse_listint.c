#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - function that reverse a listint_t linked list
 * @head: double pointer to the list
 *
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL, *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
