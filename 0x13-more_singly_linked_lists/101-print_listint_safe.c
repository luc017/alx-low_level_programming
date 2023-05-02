#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - prints the linked list
 * @head: pointer to the first node
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	unsigned int counter;

	if (head == NULL)
		exit (98);

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);

		if (current->next >= current)
		{
			printf("-> [%p] %d\n", (void *)current->next, (current->next)->n);
			break;
		}
		current = current->next;
		counter++;
	}
	return (counter);
}
