#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i;
	char *d;
	char *s;

	d = dest;
	s = src;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (d);
}
