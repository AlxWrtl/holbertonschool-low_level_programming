#include "lists.h"

/**
 * print_dlistint - Prints the elements of a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * This function prints the integer value of each node in the doubly linked list
 * starting from the provided head. It returns the total number of nodes printed.
 *
 * Return: The number of nodes printed.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return count;
}
