#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - its a function that deletes
 * @head: address of pointer to first node
 *
 * Return: value of popped node
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (head != NULL || *head != NULL)
	{
		return (0);
	}
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
