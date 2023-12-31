#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint_end - function that adds a node in the end
 *@head: is a pointer that points to the head of the list
 *@n: is the data that a node contains
 *
 *Return: return the number of nodes
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
	}

	return (newnode);
}
