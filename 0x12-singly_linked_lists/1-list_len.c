#include <stdio.h>
#include "lists.h"
/**
 * list_len - list all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	/* @current: pointer to the list_t to count the length*/
	int count = 0;
	list_t const *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
