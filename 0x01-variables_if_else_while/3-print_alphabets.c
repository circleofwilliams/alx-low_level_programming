#include <stdio.h>

/**
 *main - prints alphabeths
 *Return: always 0
 */
int main(void)
{
	int i;
	char alp[57] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
