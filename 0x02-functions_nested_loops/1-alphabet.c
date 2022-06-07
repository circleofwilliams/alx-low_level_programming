#include "main.h"

/**
 * print_alphabet - prints the alphabets
 */
void print_alphabet(void)
{
	int i;
	int j;

	i = 97;

	for (j = 0; j < 26; j++)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
