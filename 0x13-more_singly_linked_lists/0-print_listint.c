#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to head of linked list
*
* Return: number of nodes in linked list
*/
size_t listint_len(const listin_t *h)
{
	size_t count = 0;

	if (h -> next)
	{
		while (h -> next != '\0')
		{
			printf("%d\n", h -> n);
			count++;
			h = h -> next;
		}
	}
	return (count);
}
