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
	unsigned int counter = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);

		if (current - current->next > 0)
		{
			current = current->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)current->next, (current->next)->n);
			exit(98);
		}
		counter++;
	}

	return (counter);
}
