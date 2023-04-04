#include "lists.h"
#include <stdio.h>

/**
* print_listint - Prints all elements of a linked list
* @h: Pointer to the address of the first node
* Return: Returns the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);

}
