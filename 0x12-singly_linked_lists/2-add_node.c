#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add all the elements of a linked list
 * @head: pointer to the list_t list to add
 * @str: is a string
 *
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = (list_t *) malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len])
	len++;
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
