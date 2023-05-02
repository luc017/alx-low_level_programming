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
		index = current - current->next;
		if (index > 0)
		{
			temporary = current->next;
			free(current);
			current = temporary;
			counter++;
		}
		else
		{
			free(current);
			current = NULL;
			counter++;
			break;
		}
		current = temporary;
	}
	current = NULL;

	return (counter);
}
