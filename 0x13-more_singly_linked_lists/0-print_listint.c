#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints the elements of a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	for (; h != NULL; h = h->next)
	{

		printf("%d\n", h->n);
		nodes++;
	}

	return (nodes);
}
