#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that adds a node in the begining
 *@head: is the head of the linked list
 *@n: is the number
 *Return: returning the new element added
 *
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
