#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - fucntion that frees a list_t list
 * @head: a pointer of a list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
