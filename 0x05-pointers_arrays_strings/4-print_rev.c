#include "main.h"

/**
*print_rev - prints strings in reverse
*@s: string to reverse
*/

void print_rev(char *s)
{
	int i, tmp;

	int len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != '\0')
		{
			tmp = s[i];
			s[i] = s[len - i - 1];
			s[len - i - 1] = tmp;
		}
		_putchar(s[i]);
	}
	_putchar(10);
}
