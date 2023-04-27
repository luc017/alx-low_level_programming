#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds the node at the end
 * @head: ptr to the ptr that points to the head of the strcut
 * @str: the string to be added
 *
 * Return: pointer to the element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	list_t *new, *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	for (length = 0; str[length] != '\0'; length++)
		;

	tmp->len = length;
	tmp->str = strdup(str);
	if (*head == NULL)
	{
		tmp->next = *head;
		*head = tmp;
	}
	else
	{
		tmp->next = NULL;
		new = *head;
		while (new->next)
			new = new->next;
		new->next = tmp;
	}
	return (tmp);
}
