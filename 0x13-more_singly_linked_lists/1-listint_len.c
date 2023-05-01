#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the structure of nodes
 *
 * Return: length of the list
 */
size_t listint_len(const listint_t *h)
{
	int length = 0;

	for (; h != NULL; h = h->next)
	{
		length++;
	}
	return (length);
}
