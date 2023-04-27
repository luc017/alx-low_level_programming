#include "lists.h"
#include <stdlib.h>
/**
 * list_len - returns the number of elements in the list
 * @h: pointer to the list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int l = 0;

	while (h)
	{
		if (h->str == NULL)
			return (0);

		l++;
		h = h->next;
	}
	return (l);
}
