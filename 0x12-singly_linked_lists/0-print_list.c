#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to list
*
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	/* i is the count */
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
