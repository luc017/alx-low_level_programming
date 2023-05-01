#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees up memory in the heap
 * @head: pointer to the first node
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	for (; head != NULL; head = temporary)
	{
		temporary = head->next;
		free(head);
	}
}
