#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the nth node in a linked list
 * @head: pointer to the first node
 * @index: index of the node
 *
 * Return: the node, NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head != NULL && counter < index)
	{
		head = head->next;
		counter++;
	}

	if (counter == index)
		return (head);

	return (NULL);
}
