#include <stdio.h>
#include "lists.h"
/**
 * listint_len - a function that returns the num of elemnts
 * @h: is the head of the linked list
 *
 *Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
