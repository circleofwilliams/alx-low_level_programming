#include "main.h"

/**
 * print_alphabet - prints the alphabets
 */
void print_alphabet(void)
{
	int alp[27], i;

	for (i = 97; i < 113; i++)
	{
		_putchar(alp[i]);
		_putchar(10);
	}
}

/**
 * main - checks the code.
 *
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}
