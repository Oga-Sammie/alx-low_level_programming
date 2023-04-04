#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - Frees a listint list
* @head: Double pointer to the list
*/
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
}
