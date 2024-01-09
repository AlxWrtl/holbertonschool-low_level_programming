#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a doubly linked list.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node to be deleted, starting from 0.
 *
 * Description: This function deletes a node at a specified index in a
 *              doubly linked list. If the index is 0, the head is deleted.
 *              The function traverses the list to the specified index and
 *              updates the links in the list to remove the node. If the list
 *              is empty, or the index is out of bounds (greater than the list
 *              length), the function returns -1. Otherwise, it returns 1 upon
 *              successful deletion of the node.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i = 0;

	/* Return -1 if list is empty or index is out of bounds */
	if (*head == NULL || index >= dlistint_len(*head))
		return (-1);

	/* Delete the head if index is 0 */
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse to the node at the specified index */
	current = *head;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* Return -1 if index is beyond list's end */
	if (current == NULL)
		return (-1);

	/* Remove the node at the index */
	temp = current->prev;
	temp->next = current->next;
	if (current->next != NULL)
		current->next->prev = temp;

	free(current);

	return (1);
}
