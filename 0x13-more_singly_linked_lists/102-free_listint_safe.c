#include "lists.h"

/**
 * free_listint_safe - frees the list
 * @h: pointer to the start of the list
 *
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter;
	listint_t *temporary;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		counter++;
		temporary = (*h)->next;
		free(*h);

		if (temporary >= *h)
			break;

		*h = temporary;
	}

	*h = NULL
	return (counter);
}
