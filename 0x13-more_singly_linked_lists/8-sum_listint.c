#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - function resturn sum of all data
 * of the listint_t linked list
 * @head: pointer of the list
 *
 * Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
