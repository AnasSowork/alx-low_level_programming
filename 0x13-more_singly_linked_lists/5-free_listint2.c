#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - is a function that free the memory
 * @head: is the head of a linked list
 *
*/
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (current != NULL)
	{
	next = current->next;
	free(current);
	current = next;
	}
	*head = NULL;
}
