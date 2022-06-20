#include "main.h"
/**
* _memset -fills n bytes of memory with character
* @s: memory address to be edited
* @b: character to be inserted
* @n: the number of char to be inserted
* Return: returns pointer to edited address
*/

char *_memset(char *s, char b, unsigned int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
