#include "main.h"

/**
*_strlen - finds the length of a string
*@s: variable to find its length
*/

int _strlen(char *s)
{
	int count = 1;

	while (*s++ != '\0')
		count++;
	return (count);
}
