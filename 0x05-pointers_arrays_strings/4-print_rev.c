#include "main.h"

/**
*print_rev - prints strings in reverse
*@s: string to reverse
*/

void print_rev(char *s)
{
	int i,c;

	int len = strlen(s);

	for (i = 0; i < len/2; i++)
	{
		c = s[i];
		s[i] = s[len - i -1];
		s[len -i -1] = c;
	}

}
