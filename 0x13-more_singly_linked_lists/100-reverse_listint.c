#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * reverse_listint - reverses the linked list
 * @head: the pointer to the first node
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temporary = NULL;
	listint_t *next;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = temporary;
		temporary = *head;
		*head = next;
	}
	*head = temporary;

	return (*head);
}
