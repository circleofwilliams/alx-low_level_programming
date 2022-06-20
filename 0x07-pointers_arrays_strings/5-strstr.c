#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*haystack != '\0' && *needle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return (haystack);
		haystack++;
	}
	return (0);
}
