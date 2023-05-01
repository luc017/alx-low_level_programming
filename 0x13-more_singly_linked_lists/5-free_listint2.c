#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees memory in the heap
 * @head: pointer to the first node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
		return;

	for (; *head != NULL; *head = temporary)
	{
		temporary = (*head)->next;
		free(head);
	}

	*head = NULL;
}
