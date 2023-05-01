#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - deletes the head node in a linked list
 * @head: pointer to the header
 *
 * Return: the data, 0 if it  is empty
 */
int pop_listint(listint_t **head)
{
	int b;
	listint_t *temporary;

	if (*head == NULL)
		return (0);

	b = (*head)->n;

	temporary = *head;
	*head = temporary->next;

	free(temporary);

	return (b);
}
