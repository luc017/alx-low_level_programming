#include "lists.h"

/**
 * free_listint_safe - frees the list
 * @h: pointer to the start of the list
 *
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *temporary;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		if ((*h)->next >= *h)
		{
			temporary = (*h)->next;
			free(*h);
			*h = temporary;
			counter++;
		}

		else
		{
			free(*h);
			*h = NULL;
			counter++;
			break;
		}
	}
	*h = NULL;

	return (counter);
}
