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
	listint_t *node;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	node = *head;
	while (node != NULL)
	{
	tmp = node;
	node = node->next;
	free(tmp);
	}
	*head = NULL;
}
