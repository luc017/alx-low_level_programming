#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds the node at the end
 * @head: pointer to the first node/structure
 * @n: the data
 *
 * Return: address, NULL if it fsils
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temporary;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head != NULL)
	{
		new->next = NULL;

		temporary = *head;
		while (temporary->next)
			temporary = temporary->next;
		temporary->next = new;
	}
	else
	{
		new->next = *head;
		new = *head;
	}
	return (new);
}
