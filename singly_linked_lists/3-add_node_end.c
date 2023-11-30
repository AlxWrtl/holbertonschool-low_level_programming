#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the head of the linked list.
 * @str: String to be stored in the new node.
 *
 * This function adds a new node containing a copy of the provided string to
 * the end of the linked list. If memory allocation fails, the function returns
 * NULL. Otherwise, it returns a pointer to the newly added node.
 *
 * Return: A pointer to the newly added node, or NULL on failure.
 */

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

	return (new_node);
}
