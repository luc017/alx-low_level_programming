#include "lists.h"
/**
 * find_listint_loop - finds the loop in the list
 * @head: pointer to the linked list
 *
 * Return: address of the where the loop starts, NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current = head, *temporary = head;

	if (head == NULL)
		return (NULL);

	while (current && temporary && temporary->next)
	{
		current = current->next;
		temporary = temporary->next->next;

		if (current == temporary)
		{
			current = head;
			while (current != temporary)
			{
				temporary = temporary->next;
				current = current->next;
			}
			return (temporary);
		}
	}
	return (NULL);
}
