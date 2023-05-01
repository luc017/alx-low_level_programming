#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a node at a certain index
 * @head: pointer to the first integer
 * @idx: index at which we insert the integer
 * @n: the new data
 *
 * Return: address to the new node, NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temporary, *new;
	unsigned int counter = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temporary = *head;
	while (temporary != NULL && counter < idx - 1)
	{
		if (counter == idx)
		{
			new->next = temporary->next;
			temporary->next = new;
			return (new);
		}
		temporary = temporary->next;
		counter++;
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	return (NULL);
}
