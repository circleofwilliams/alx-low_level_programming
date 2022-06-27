#include "main.h"

/**
*create_array - create character arrays
*@size: the size of the array
*@c: the initializing character
*Return: a pointer to the array or null
*/

char *create_array(size_t size, char c)
{
	char *p;
	size_t i;

	if (size <= 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);

}
