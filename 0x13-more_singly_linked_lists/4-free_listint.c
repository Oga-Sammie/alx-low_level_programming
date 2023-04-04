#include "lists.h"
#include <stdlib.h>

/**
* free_listint - Frees a listint list
* @head: Pointer to the start of the list
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
