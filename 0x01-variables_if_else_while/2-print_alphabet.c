#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabets
 *
 * Return: Alwasy 0
 */
int main(void)
{
	char alp[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
