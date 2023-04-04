#include "lists.h"

/**
* listint_len -	Number of nodes in a linked list
* @h: Pointer to the address of the first node
* Return: Returns the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
