#include "main.h"
/**
 * _strchr - finds a character in a string,
 * @s: string to search
 * @c: character to be located
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == 'c')
			return (s);
			break;
		s++;
	}
	return (NULL);
}
