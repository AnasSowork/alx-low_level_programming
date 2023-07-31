#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - is a function that free the memory
 * @head: is the head of a linked list
 *
*/
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
	next = current->next;
	free(current);
	current = next;
	}
}
