#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: pointer to the structure of the node
 * @n: the new int to te added
 *
 * Return: address or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = *head;
	*head = current;


	return (current);
}
