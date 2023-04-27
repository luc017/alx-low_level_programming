#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees the memory allocated on the heap
 * @head: pointer to the struct
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
