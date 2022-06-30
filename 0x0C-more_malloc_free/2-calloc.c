#include "main.h"

/**
*_calloc - allocate memory
*@nmemb: array
*@size: size
*Return: pointer to memory
*/

void *_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	if (nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}

