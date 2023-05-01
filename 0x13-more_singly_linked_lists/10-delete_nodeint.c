#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes the node at the index
 * @head: pointer to the first node
 * @index: the index to which we want to delete the node
 *
 * Return: 1 if it succeeds, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary, *prev;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	temporary = *head;
	while (temporary != NULL && counter < index)
	{
		prev = temporary;
		temporary = temporary->next;
		counter++;
	}
	if (temporary == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temporary->next;
		return (1);
	}
	prev->next = temporary->next;

	return (1);
}
