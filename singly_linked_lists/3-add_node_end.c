#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list_t list.
 * @str: String to be duplicated and added to the new node.
 * Description:
 * This function allocates memory for a new node, duplicates
 * the given string, and adds the new node at the end of
 * the list_t list. If memory allocation fails, it returns NULL.
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodeEnd;
	list_t *temp;

	temp = *head;

	nodeEnd = malloc(sizeof(list_t));
	if (nodeEnd == NULL)
	{
		return (NULL);
	}
	nodeEnd->str = strdup(str);
	if (nodeEnd->str == NULL)
	{
		free(nodeEnd);
		return (NULL);
	}
	nodeEnd->len = 0;
	while (str[nodeEnd->len])
	{
		nodeEnd->len++;
	}

	nodeEnd->next = NULL;
	if (*head == NULL)
	{
		*head = nodeEnd;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nodeEnd;
	}
	return (nodeEnd);
}
