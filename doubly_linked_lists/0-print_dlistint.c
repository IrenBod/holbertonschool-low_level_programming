#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 * Description:
 * This function iterates through a doubly linked list and prints
 * the integer stored in each node to the standard output.
 * It returns the total number of nodes in the list.
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)

{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
