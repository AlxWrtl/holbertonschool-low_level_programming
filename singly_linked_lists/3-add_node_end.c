#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t len = strlen(str);

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{

		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}

	return new_node;
}
