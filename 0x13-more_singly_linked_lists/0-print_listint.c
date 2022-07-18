#include "lists.h"

/**
*print_listint - prints all elements
*@h: the head pointer
*Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{

	size_t count = 0;

	if (h == NULL)
	{
		printf("The list is empty");
		return (count);
	}


	while (h != 0)
	{
		printf("%d", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
