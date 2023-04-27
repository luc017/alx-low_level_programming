#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints the list of all elements
 * @h: pointer to the head
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		node++;
	}
	return (node);
}
