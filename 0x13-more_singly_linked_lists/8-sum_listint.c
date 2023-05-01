#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - sums up all the data
 * @head: pointer to the first node of data
 *
 * Return: the sum, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temporary = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temporary != NULL)
	{
		sum += temporary->n;
		temporary = temporary->next;
	}

	return (sum);
}
