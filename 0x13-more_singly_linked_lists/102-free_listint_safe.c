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
	listint_t *temporary, *current = *h;

	if (h == NULL || *h == NULL)
		return (0);

	while (current != NULL)
	{
		current++;
		temporary = current->next;
		free(current);
		if (temporary >= current)
		{
			*h = NULL;
			break;
		}
		current = temporary;
	}

	return (counter);
}
