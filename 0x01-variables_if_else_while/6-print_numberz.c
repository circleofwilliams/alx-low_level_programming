#include<stdio.h>

/**
 * main - prints numbers between 0-9
 *
 * Return: alwasy 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
