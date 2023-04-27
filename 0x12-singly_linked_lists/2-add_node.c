#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node -  adds another node to the linked list
 * @head: pointer to the pointer to the head of the list
 * @str: string to be added
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int length;
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	tmp->str = strdup(str);
	tmp->len = length;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
