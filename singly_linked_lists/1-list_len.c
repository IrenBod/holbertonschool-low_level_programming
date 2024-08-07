#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the list_t list.
 * Description:
 * This function traverses a linked list of type list_t,
 * counting the number of nodes in the list.
 * Return: The number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
