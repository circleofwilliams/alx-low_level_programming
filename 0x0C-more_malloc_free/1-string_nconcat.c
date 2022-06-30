#include "main.h"

/**                                                       
*_strlen - find length of string                          
*@str: the string                                         
*Return: the lenght                                       
*/                                                        
                                            
int _strlen(char *str)                                    
{
	if (*str == '\0')
		return (0);                               
	return (1 + _strlen(str + 1));                    
}                              

/**
*string_nconcat - concatonate 2 strings
*@s1: lead string
*@s2: string 2
*@n: number of bytes
*Return: the concatonated stirng
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > _strlen(s2))
		n = _strlen(s2);

	ptr = malloc(_strlen(s1) * sizeof(char) + n * sizeof(s2) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}
