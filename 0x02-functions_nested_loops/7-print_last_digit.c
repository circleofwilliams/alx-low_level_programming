#include"main.h"

/**
 * print_last_digit - prints the last digit
 *
 * Return: returns the value of the last digits
 *
 * @x: number which last digit is returned
 */
int print_last_digit(int x)
{
	int i;

	i = x % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
