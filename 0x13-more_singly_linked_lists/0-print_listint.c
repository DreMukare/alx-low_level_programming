#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to head of linked list
*
* Return: number of nodes in linked list
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
