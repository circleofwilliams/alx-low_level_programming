#include "main.h"

/**
*_calloc - allocate memory
*@nmemb: array
*@size: size
*Return: pointer to memory
*/

void *_calloc(size_t nmemb, size_t size)
{
	int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}

