#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *d;

	d = dest;

	while (*dest != '\0')
		dest++;
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;  
	}
	return (d);
}
              
