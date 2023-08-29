#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - function deletes the head of the
 * node
 * @head: double pointer of the list
 * Return: the head nodes data or 0 if linked is empty
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (data);

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (data);
}
