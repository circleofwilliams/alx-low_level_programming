#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 97;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
