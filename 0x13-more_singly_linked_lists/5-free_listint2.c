#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - function that frees listint_t
 * @head: double pointer of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}
