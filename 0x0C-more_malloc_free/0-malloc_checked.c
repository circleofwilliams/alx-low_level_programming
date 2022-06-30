#include "main.h"

/**
*malloc_checked - allocate memory
*@b: amount of memory
*/

void *malloc_checked(size_t b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
