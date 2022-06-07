#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets
 */
void print_alphabet_x10(void)
{
	int i;
	int j;
	int k;

	i = 97;

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j < 26; j++, i++)
		{
			_putchar(i);

		}
	_putchar('\n');
	}
}
