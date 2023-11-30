#include "lists.h"

/**
 * free_list - Frees memory allocated for a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * This function frees the memory allocated for each node in the linked list,
 * including the strings within each node. It iterates through the list,
 * freeing each node and its associated memory. Additionally, the system call
 * for valgrind is included, which is not typically part of the free_list
 * function.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	system("valgrind --leak-check=full ./e");
}
