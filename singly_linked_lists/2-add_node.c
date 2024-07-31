#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list_t list.
 * @str: String to be duplicated and added to the new node.
 *Description:
 * This function allocates memory for a new node, duplicates
 * the given string, and adds the new node at the beginning
 * of the list_t list. If memory allocation fails, it returns NULL.
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
		if (newNode == NULL)
		{
			return (NULL);
		}
		newNode->str = strdup(str);
		if (newNode->str == NULL)
		{
			free(newNode);
			return (NULL);
		}

		newNode->len = strlen(str);
		newNode->next = *head;
		*head = newNode;
		return (newNode);
}
