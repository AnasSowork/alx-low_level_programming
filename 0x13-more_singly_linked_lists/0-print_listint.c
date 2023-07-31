#include <stdio.h>
#include "lists.h"
/**
 * print_listint - fucntion that prints the content of a linked list
 * @h: is the head of the linked list
 *
 * Return: return number of nodes
 *
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
	count++;
	tmp = tmp->next;
	}
	return (count);
}
