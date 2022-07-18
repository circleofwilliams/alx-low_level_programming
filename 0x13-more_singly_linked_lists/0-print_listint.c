#include "lists.h"

/**
*print_listint - prints all elements
*@h: the head pointer
*Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	listint_t *ptr;
	size_t count = 0;

	ptr = h;

	while (ptr != 0)
	{
		printf("%d", ptr->n);
		count++;
		ptr = ptr->next;
	}
}
