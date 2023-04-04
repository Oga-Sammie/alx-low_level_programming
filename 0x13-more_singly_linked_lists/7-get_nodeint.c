#include "lists.h"
#include <stdlib.h>

/**
* get_nodeint_at_index -	Returns (n)th node in linked list
* @head:			Pointer to 1st node in linked list
* @index:			Position to (n)th node in linked list
* Return:			(n)th node in linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	tmp = head;

	if (tmp == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	return (tmp);
}
